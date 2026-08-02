

# DirectShowSpy & RoWTL Extensions (from alax.info)

This repository archives C++ source code originally developed by **Roman Ryltsov** ([alax.info](http://alax.info)). It contains custom ATL/WTL template library extensions (`rowtl`) and core COM components for the **DirectShowSpy** developer utility, specifically focusing on Broadcast Device Architecture (BDA) Filter Graph hooks.

## 📦 Repository Structure

| Directory / File | Description |
|------------------|-------------|
| `Common/alax.info/rowtlapp.h` | Extended WTL/ATL application module. Adds per-thread message loop management, satellite resource DLL loading, and version compatibility checks. |
| `Common/alax.info/rowtlcrack.h` | Comprehensive notification-cracking macros for Windows Common Controls (ListViews, TreeViews, Toolbars, Headers, etc.) designed to integrate seamlessly with ATL/WTL message maps. |
| `DirectShowSpy/BdaHooks/` | ATL COM DLL implementing DirectShow Filter Graph event hooks (`IFilterGraphAddRemoveHook`, `IFilterGraphConnectHook`, `IFilterGraphStateControlHook`). Includes MIDL definitions, COM object implementations, and DLL registration logic. |

## 🛠️ Prerequisites

- **Visual Studio** 2008+ (Recommended: 2010 or 2013 for best ATL/WTL & C++ compatibility)
- **Windows SDK** (Targeting `_WIN32_IE >= 0x0500` and `_WIN32_WINNT >= 0x0501` based on macro guards)
- **ATL & WTL** libraries enabled in the project
- **MIDL Compiler** (for `.idl` to `.i.c/.h` generation)

## 📖 Installation & Usage

### 1. Integrating `rowtl` Headers
These headers are designed to drop into existing ATL/WTL projects:
1. Add `Common/alax.info/` to your project's **Include Directories**.
2. Include the headers where needed:
   ```cpp
   #include "rowtlapp.h"
   #include "rowtlcrack.h"
   ```
3. **Message Loops:** Use `CWtlExeModuleT<YourModule>` to manage thread-specific `CMessageLoop` instances via `AddMessageLoop()` and `GetMessageLoop()`.
4. **Resource Localization:** Use `CModuleResourceInstanceT` to automatically load version-matched satellite `.dll` resource modules based on registry locale settings.
5. **Notification Cracking:** Replace standard ATL `MSG_WM_NOTIFY` macros with the provided `MSG_*` macros (e.g., `MSG_LVN_ITEMCHANGED`, `MSG_TVN_SELCHANGED`) for cleaner, type-safe notification handlers in your window/dialog classes.

### 2. Building `BdaHooks.dll`
The BDA hooks are implemented as a standard ATL COM DLL:
1. Open the associated Visual Studio project/solution (`.vcxproj` or `.dsp`).
2. Ensure the project is configured for **ATL Support (Static/DLL)** and **COM Threading Model: Apartment/Free** as required.
3. Build the project using MSBuild or Visual Studio.
4. Register the compiled DLL for debugging/tracing:
   ```cmd
   regsvr32 /i user BdaHooks.dll
   ```
   *(Note: The `/i user` flag triggers the `DllInstall` routine for per-user registration.)*

## ⚠️ Important Disclaimer

> **Developer Tool Warning:** `DirectShowSpy` and its associated hooks are strictly intended for **development, debugging, and troubleshooting**. As explicitly stated by the original author, this code **should not be shipped with release-grade software**. The hooking methods and tracing mechanisms are designed for diagnostic environments and may impact application stability or performance in production.

## 📜 License & Attribution

Copyright (C) Roman Ryltsov, 2006-2015.  
Source: [http://alax.info](http://alax.info)

**Reuse Policy:**
- Permission is granted to reuse this source code provided the original copyright notice is retained.
- A reference to `http://alax.info` must be included in any derived or redistributed work.
- For `DirectShowSpy` components, you must not claim authorship of the original tool. Attribution to the original author is required.

*This repository serves as a community archive/mirror of the original publications.*
