#NoEnv  ; Recommended for performance and compatibility with future AutoHotkey releases.
#Warn  ; Recommended for catching common errors.
SendMode Input  ; Recommended for new scripts due to its superior speed and reliability.
SetWorkingDir %A_ScriptDir%  ; Ensures a consistent starting directory.

clipboard = 
FileRead, Clipboard,  temp.txt

SetTitleMatchMode 2

WinActivate,Opera ahk_class  ahk_class OperaWindowClass,
 
 IfWinActive  ,Opera ahk_class  ahk_class OperaWindowClass,
{
    sendinput ^v{enter}
}   
 
else
{  
  msgbox ,0,KOLAVERI FB CHAT, Error: unable to detect your facebook chat window
}

WinActivate,KOLAVERI FB CHAT ahk_class ConsoleWindowClass

