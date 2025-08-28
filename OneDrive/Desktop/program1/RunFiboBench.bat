@echo off
REM ============================================
REM One-click runner for Fibonacci benchmark
REM Author: Nick Nojiri
REM Purpose: Call Python to run run_all.py,
REM          then open the generated PNG graph
REM ============================================

REM Change this path to where run_all.py lives:
set PROJ=C:\Users\nickt\projects\fibo

cd /d %PROJ%

REM Run the Python launcher
python run_all.py

REM If PNG exists, open it in default viewer
if exist "%PROJ%\fibo_both.png" (
    start "" "%PROJ%\fibo_both.png"
)

echo.
echo Done! All outputs are in: %PROJ%
pause
