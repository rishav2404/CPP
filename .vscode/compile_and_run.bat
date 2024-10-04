@echo off
setlocal

set "file=%1"
set "workspaceFolder=%2"
set "inputFile=%workspaceFolder%\input.txt"
set "outputFile=%workspaceFolder%\output.txt"
set "tempFile=%workspaceFolder%\tempFile.exe"

if "%file:~-2%" == ".c" (
    gcc -o "%tempFile%" "%file%"
) else (
    g++ -o "%tempFile%" "%file%"
)

"%tempFile%" < "%inputFile%" > "%outputFile%"

del "%tempFile%"

endlocal