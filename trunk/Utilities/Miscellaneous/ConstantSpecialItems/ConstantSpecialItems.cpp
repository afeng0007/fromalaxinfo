////////////////////////////////////////////////////////////
// Copyright (C) Roman Ryltsov, 2008-2015
// Created by Roman Ryltsov roman@alax.info

#include "stdafx.h"
#include <windows.h>
#include <shlobj.h>

int _tmain(int argc, _TCHAR* argv[])
{
	OSVERSIONINFOEX VersionInformation = { sizeof VersionInformation };
	ATLVERIFY(GetVersionEx((OSVERSIONINFO*) &VersionInformation));
	_tprintf(_T("Windows version %d.%d, Build %d\n"), VersionInformation.dwMajorVersion, VersionInformation.dwMinorVersion, VersionInformation.dwBuildNumber);
	_tprintf(_T("\n"));
	#pragma region CSIDL_xxx
	{
		static const struct
		{
			INT nIdentifier;
			LPCSTR pszName;
		} g_pMap[] = 
		{
			#define A(x) { x, #x },
			A(CSIDL_DESKTOP)
			A(CSIDL_INTERNET)
			A(CSIDL_PROGRAMS)
			A(CSIDL_CONTROLS)
			A(CSIDL_PRINTERS)
			A(CSIDL_PERSONAL) // CSIDL_MYDOCUMENTS
			A(CSIDL_FAVORITES)
			A(CSIDL_STARTUP)
			A(CSIDL_RECENT)
			A(CSIDL_SENDTO)
			A(CSIDL_BITBUCKET)
			A(CSIDL_STARTMENU)
			A(CSIDL_MYMUSIC)
			A(CSIDL_MYVIDEO)
			A(CSIDL_DESKTOPDIRECTORY)
			A(CSIDL_DRIVES)
			A(CSIDL_NETWORK)
			A(CSIDL_NETHOOD)
			A(CSIDL_FONTS)
			A(CSIDL_TEMPLATES)
			A(CSIDL_COMMON_STARTMENU)
			A(CSIDL_COMMON_PROGRAMS)
			A(CSIDL_COMMON_STARTUP)
			A(CSIDL_COMMON_DESKTOPDIRECTORY)
			A(CSIDL_APPDATA)
			A(CSIDL_PRINTHOOD)
			A(CSIDL_LOCAL_APPDATA)
			A(CSIDL_ALTSTARTUP)
			A(CSIDL_COMMON_ALTSTARTUP)
			A(CSIDL_COMMON_FAVORITES)
			A(CSIDL_INTERNET_CACHE)
			A(CSIDL_COOKIES)
			A(CSIDL_HISTORY)
			A(CSIDL_COMMON_APPDATA)
			A(CSIDL_WINDOWS)
			A(CSIDL_SYSTEM)
			A(CSIDL_PROGRAM_FILES)
			A(CSIDL_MYPICTURES)
			A(CSIDL_PROFILE)
			A(CSIDL_SYSTEMX86)
			A(CSIDL_PROGRAM_FILESX86)
			A(CSIDL_PROGRAM_FILES_COMMON)
			A(CSIDL_PROGRAM_FILES_COMMONX86)
			A(CSIDL_COMMON_TEMPLATES)
			A(CSIDL_COMMON_DOCUMENTS)
			A(CSIDL_COMMON_ADMINTOOLS)
			A(CSIDL_ADMINTOOLS)
			A(CSIDL_CONNECTIONS)
			A(CSIDL_COMMON_MUSIC)
			A(CSIDL_COMMON_PICTURES)
			A(CSIDL_COMMON_VIDEO)
			A(CSIDL_RESOURCES)
			A(CSIDL_RESOURCES_LOCALIZED)
			A(CSIDL_COMMON_OEM_LINKS)
			A(CSIDL_CDBURN_AREA)
			A(CSIDL_COMPUTERSNEARME)
			#undef A  
		};
		_tprintf(_T("CSIDL paths:\n\n"));
		for(auto&& Item: g_pMap)
		{
			TCHAR pszPath[MAX_PATH] = { 0 };
			if(SHGetSpecialFolderPath(NULL, pszPath, Item.nIdentifier, FALSE))
				_tprintf(_T("%hs: %s\n"), Item.pszName, pszPath);
			else
				_tprintf(_T("%hs not found\n"), Item.pszName);
		}
		_tprintf(_T("\n"));
	}
	#pragma endregion 
	#pragma region FOLDERID_xxx
	{
		static const struct
		{
			KNOWNFOLDERID Identifier;
			LPCSTR pszName;
		} g_pMap[] = 
		{
			#define A(x) { x, #x },
			A(FOLDERID_NetworkFolder)
			A(FOLDERID_ComputerFolder)
			A(FOLDERID_InternetFolder)
			A(FOLDERID_ControlPanelFolder)
			A(FOLDERID_PrintersFolder)
			A(FOLDERID_SyncManagerFolder)
			A(FOLDERID_SyncSetupFolder)
			A(FOLDERID_ConflictFolder)
			A(FOLDERID_SyncResultsFolder)
			A(FOLDERID_RecycleBinFolder)
			A(FOLDERID_ConnectionsFolder)
			A(FOLDERID_Fonts)
			A(FOLDERID_Desktop)
			A(FOLDERID_Startup)
			A(FOLDERID_Programs)
			A(FOLDERID_StartMenu)
			A(FOLDERID_Recent)
			A(FOLDERID_SendTo)
			A(FOLDERID_Documents)
			A(FOLDERID_Favorites)
			A(FOLDERID_NetHood)
			A(FOLDERID_PrintHood)
			A(FOLDERID_Templates)
			A(FOLDERID_CommonStartup)
			A(FOLDERID_CommonPrograms)
			A(FOLDERID_CommonStartMenu)
			A(FOLDERID_PublicDesktop)
			A(FOLDERID_ProgramData)
			A(FOLDERID_CommonTemplates)
			A(FOLDERID_PublicDocuments)
			A(FOLDERID_RoamingAppData)
			A(FOLDERID_LocalAppData)
			A(FOLDERID_LocalAppDataLow)
			A(FOLDERID_InternetCache)
			A(FOLDERID_Cookies)
			A(FOLDERID_History)
			A(FOLDERID_System)
			A(FOLDERID_SystemX86)
			A(FOLDERID_Windows)
			A(FOLDERID_Profile)
			A(FOLDERID_Pictures)
			A(FOLDERID_ProgramFilesX86)
			A(FOLDERID_ProgramFilesCommonX86)
			A(FOLDERID_ProgramFilesX64)
			A(FOLDERID_ProgramFilesCommonX64)
			A(FOLDERID_ProgramFiles)
			A(FOLDERID_ProgramFilesCommon)
			A(FOLDERID_UserProgramFiles)
			A(FOLDERID_UserProgramFilesCommon)
			A(FOLDERID_AdminTools)
			A(FOLDERID_CommonAdminTools)
			A(FOLDERID_Music)
			A(FOLDERID_Videos)
			A(FOLDERID_Ringtones)
			A(FOLDERID_PublicPictures)
			A(FOLDERID_PublicMusic)
			A(FOLDERID_PublicVideos)
			A(FOLDERID_PublicRingtones)
			A(FOLDERID_ResourceDir)
			A(FOLDERID_LocalizedResourcesDir)
			A(FOLDERID_CommonOEMLinks)
			A(FOLDERID_CDBurning)
			A(FOLDERID_UserProfiles)
			A(FOLDERID_Playlists)
			A(FOLDERID_SamplePlaylists)
			A(FOLDERID_SampleMusic)
			A(FOLDERID_SamplePictures)
			A(FOLDERID_SampleVideos)
			A(FOLDERID_PhotoAlbums)
			A(FOLDERID_Public)
			A(FOLDERID_ChangeRemovePrograms)
			A(FOLDERID_AppUpdates)
			A(FOLDERID_AddNewPrograms)
			A(FOLDERID_Downloads)
			A(FOLDERID_PublicDownloads)
			A(FOLDERID_SavedSearches)
			A(FOLDERID_QuickLaunch)
			A(FOLDERID_Contacts)
			A(FOLDERID_SidebarParts)
			A(FOLDERID_SidebarDefaultParts)
			A(FOLDERID_PublicGameTasks)
			A(FOLDERID_GameTasks)
			A(FOLDERID_SavedGames)
			A(FOLDERID_Games)
			A(FOLDERID_SEARCH_MAPI)
			A(FOLDERID_SEARCH_CSC)
			A(FOLDERID_Links)
			A(FOLDERID_UsersFiles)
			A(FOLDERID_UsersLibraries)
			A(FOLDERID_SearchHome)
			A(FOLDERID_OriginalImages)
			A(FOLDERID_DocumentsLibrary)
			A(FOLDERID_MusicLibrary)
			A(FOLDERID_PicturesLibrary)
			A(FOLDERID_VideosLibrary)
			A(FOLDERID_RecordedTVLibrary)
			A(FOLDERID_HomeGroup)
			A(FOLDERID_HomeGroupCurrentUser)
			A(FOLDERID_DeviceMetadataStore)
			A(FOLDERID_Libraries)
			A(FOLDERID_PublicLibraries)
			A(FOLDERID_UserPinned)
			A(FOLDERID_ImplicitAppShortcuts)
			A(FOLDERID_AccountPictures)
			A(FOLDERID_PublicUserTiles)
			A(FOLDERID_AppsFolder)
			A(FOLDERID_ApplicationShortcuts)
			A(FOLDERID_RoamingTiles)
			A(FOLDERID_RoamedTileImages)
			A(FOLDERID_Screenshots)
			A(FOLDERID_CameraRoll)
			A(FOLDERID_SkyDrive)
			A(FOLDERID_SkyDriveDocuments)
			A(FOLDERID_SkyDrivePictures)
			A(FOLDERID_SkyDriveMusic)
			A(FOLDERID_SkyDriveCameraRoll)
			A(FOLDERID_SearchHistory)
			A(FOLDERID_SearchTemplates)
			#undef A  
		};
		_tprintf(_T("FOLDERID paths:\n\n"));
		for(auto&& Item: g_pMap)
		{
			CComHeapPtr<TCHAR> pszPath;
			const HRESULT nResult = SHGetKnownFolderPath(Item.Identifier, KF_FLAG_DEFAULT_PATH, NULL, &pszPath);
			if(SUCCEEDED(nResult))
				_tprintf(_T("%hs: %s\n"), Item.pszName, pszPath);
			else
				_tprintf(_T("%hs not found (0x%08X)\n"), Item.pszName, nResult);
		}
		_tprintf(_T("\n"));
	}
	#pragma endregion 
	return 0;
}

