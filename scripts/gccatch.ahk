#NoEnv  ; Recommended for performance and compatibility with future AutoHotkey releases.
#Warn  ; Recommended for catching common errors.
SendMode Input  ; Recommended for new scripts due to its superior speed and reliability.
SetWorkingDir %A_ScriptDir%  ; Ensures a consistent starting directory.

clipboard = 
FileRead, Clipboard, temp.txt
SetTitleMatchMode 2

WinActivate, Google Chrome ahk_class  Chrome_WidgetWin_0,
 
 IfWinActive  ,Google Chrome ahk_class  Chrome_WidgetWin_0,
{
    sendinput ^v{enter}
}   
 
else
{  
  msgbox ,0,KOLAVERI FB CHAT, Error: unable to detect your facebook chat window
}

WinActivate,KOLAVERI FB CHAT ahk_class ConsoleWindowClass

