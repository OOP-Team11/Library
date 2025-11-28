param(
    [string]$Path = ".",
    [switch]$Backup
)

$enc949 = [System.Text.Encoding]::GetEncoding(949)
$encUtf8 = [System.Text.Encoding]::UTF8

$filters = @('*.cpp','*.h','*.txt','*.md')
$files = Get-ChildItem -Path $Path -Recurse -Include $filters -File -ErrorAction SilentlyContinue

foreach ($f in $files) {
    try {
        if ($Backup) { Copy-Item -Path $f.FullName -Destination "$($f.FullName).bak" -Force }
        $bytes = [System.IO.File]::ReadAllBytes($f.FullName)
        $text = $enc949.GetString($bytes)
        [System.IO.File]::WriteAllText($f.FullName, $text, $encUtf8)
        Write-Host "Converted:" $f.FullName
    } catch {
        Write-Warning "Failed to convert $($f.FullName): $_"
    }
}

Write-Host "Done. Converted $($files.Count) files (attempted)."