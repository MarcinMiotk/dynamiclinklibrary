# Dynamic Link Library tutorial
Tutorial about "Dynamic-Link Library", DLL. 

# Knowledge

- MSDN Dynamic-Link Libraries - https://msdn.microsoft.com/en-us/library/windows/desktop/ms682589%28v=vs.85%29.aspx?f=255&MSPPError=-2147217396


API
- FreeLibrary function https://msdn.microsoft.com/en-us/library/windows/desktop/ms683152%28v=vs.85%29.aspx?f=255&MSPPError=-2147217396
- LoadLibrary function https://msdn.microsoft.com/en-us/library/windows/desktop/ms684175(v=vs.85).aspx
- GetProcAddress function https://msdn.microsoft.com/en-us/library/windows/desktop/ms683212(v=vs.85).aspx
- Using Run-Time Dynamic Linking https://msdn.microsoft.com/en-us/library/windows/desktop/ms686944(v=vs.85).aspx

# Tools
- Dependency Walker http://www.dependencywalker.com/
- dumpbin.exe
- rundll32.exe   (RUNDLL32.EXE <dllname>,<entrypoint> <optional arguments>

# Example RUNDLL32 commands with user32.dll
```
rundll32 user32.dll,LockWorkStation
```
# Example DUMPBIN usage

It lists all exported functions in user32.dll
```
dumpbin.exe /EXPORTS user32.dll | more
```





# Some RunDll32 commands for Windows Vista and Windows 7

Documentation for RunDll https://support.microsoft.com/en-us/kb/164787 

Add/Remove Programs
```
RunDll32.exe shell32.dll,Control_RunDLL appwiz.cpl,,0
```

Control Panel
```
RunDll32.exe shell32.dll,Control_RunDLL
```

Date and Time Properties
```
RunDll32.exe shell32.dll,Control_RunDLL timedate.cpl
```

Display Settings
```
RunDll32.exe shell32.dll,Control_RunDLL access.cpl,,3
```

Device Manager
```
RunDll32.exe devmgr.dll DeviceManager_Execute
```

Hibernate
```
RunDll32.exe powrprof.dll,SetSuspendState
```

Lock Screen
```
RunDll32.exe user32.dll,LockWorkStation
```

Mouse Button - Swap left button to function as right
```
Rundll32 User32.dll,SwapMouseButton
```

Mouse Properties Dialog Box
```
Rundll32 Shell32.dll,Control_RunDLL main.cpl @0,0
```

Network Connections
```
RunDll32.exe shell32.dll,Control_RunDLL ncpa.cpl
```

Power Options
```
RunDll32.exe Shell32.dll,Control_RunDLL powercfg.cpl
```

Regional and Language Options
```
Rundll32 Shell32.dll,Control_RunDLL Intl.cpl,,0
```
Stored Usernames and Passwords
```
RunDll32.exe keymgr.dll,KRShowKeyMgr
```

Safely Remove Hardware Dialog Box 
```
Rundll32 Shell32.dll,Control_RunDLL HotPlug.dll
```

Sound Properties Dialog Box 
```
Rundll32 Shell32.dll,Control_RunDLL Mmsys.cpl,,0
```

System Properties Box 
```
Rundll32 Shell32.dll,Control_RunDLL Sysdm.cpl,,3
```

User Accounts
```
RunDll32.exe shell32.dll,Control_RunDLL nusrmgr.cpl
```

Unplug/Eject Hardware
```
RunDll32.exe shell32.dll,Control_RunDLL hotplug.dll
```

Windows - About
```
RunDll32.exe SHELL32.DLL,ShellAboutW
```

Windows Firewall
```
RunDll32.exe shell32.dll,Control_RunDLL firewall.cpl
```



# Snippets

```
__declspec(dllexport)
```

```
HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\Session Manager\KnownDLLs
```
