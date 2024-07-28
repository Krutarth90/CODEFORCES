# compile_and_run.ps1

Copy-Item 'D:\VS Code\codeforces\demo.cpp' 'D:\VS Code\codeforces\jspwTest.cpp' -Force
Set-Location 'D:\VS Code\codeforces'
g++ 'jspwTest.cpp' -o 'jspwTest.exe'
Get-Content 'input.txt' | .\jspwTest.exe | Out-File 'output.txt' -Encoding utf8
Remove-Item 'jspwTest.exe'
Remove-Item 'jspwTest.cpp'
