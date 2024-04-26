@echo off

set a=%CD%

cmd.exe starship init --shell cmd.exe /k clink inject --quiet && cd %a%