@echo off
g++ -std=c++11 -o agent main.cpp Edge.cpp Node.cpp Graph.cpp Agent.cpp

:: Check if compilation was successful
if %errorlevel%==0 (
   echo Compilation successful! Running the program...
   agent.exe
) else (
   echo Compilation failed.
)
pause

