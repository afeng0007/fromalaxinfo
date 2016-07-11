

# System

 * System Version: `6.2` Build `9200`; Windows 8; Suite Mask `0x100`; Product Type `0x1`
 * Computer Name: `DESKTOP-B2VS7MT`
 * User Name: `xeusdemo` 
 * Local Time: `7/11/2016 4:10:17 PM`
 * Architecture: AMD/Intel x64 (x64 Application)
 * Processors: `8`, Active Mask `0xFF`
 * Page Size: `0x1000`
 * Application Address Space: `0x0000000000010000`..`0x00007FFFFFFEFFFF`
 * Physical Memory: `8,130` MB
 * Committed Memory Limit: `9,410` MB

# DeckLink API

## API Information

  * 64-Bit Integer `BMDDeckLinkAPIVersion`: `168167424` (`0xA060800`) // 10.6.8
  * String `BMDDeckLinkAPIRCTag`: `a2`
  * Flag (32-Bit Integer) `BMDDeckLinkAPIEngineeringMode`: `1` (`0x1`)

## DeckLink Quad (1) (DeckLink Quad 2)

 * Model Name: DeckLink Quad 2
 * Display Name: DeckLink Quad (1)
 * Interfaces:
  * `IDeckLink`
  * `IDeckLink_v8_0`
  * `IDeckLinkInput`
  * `IDeckLinkInput_v7_1`
  * `IDeckLinkInput_v7_3`
  * `IDeckLinkInput_v7_6`
  * `IDeckLinkInput_v9_2`
  * `IDeckLinkOutput`
  * `IDeckLinkOutput_v7_1`
  * `IDeckLinkOutput_v7_3`
  * `IDeckLinkOutput_v7_6`
  * `IDeckLinkOutput_v9_9`
  * `IDeckLinkConfiguration`
  * `IDeckLinkConfiguration_v7_6`
  * `IDeckLinkConfiguration_v10_2`
  * `IDeckLinkAttributes`
  * `IDeckLinkKeyer`
  * `IDeckLinkDeckControl`
  * `IDeckLinkDeckControl_v7_9`
  * `IDeckLinkDeckControl_v8_1`

### Attributes

  * Flag (32-Bit Integer) `BMDDeckLinkSupportsInternalKeying`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsExternalKeying`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsHDKeying`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsInputFormatDetection`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasReferenceInput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasSerialPort`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasVideoInputAntiAliasingFilter`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasBypass`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsDesktopDisplay`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsClockTimingAdjustment`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsFullDuplex`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsFullFrameReferenceInputTimingOffset`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsSMPTELevelAOutput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasAllAnalogOutputConnectionsActive`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsAutoSwitchingPPsFOnInput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsDualLinkSDI`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsIdleOutput`: `1` (`0x1`)
  * 64-Bit Integer `BMDDeckLinkMaximumAudioChannels`: `16` (`0x10`)
  * 64-Bit Integer `BMDDeckLinkNumberOfSubDevices`: `8` (`0x8`)
  * 64-Bit Integer `BMDDeckLinkSubDeviceIndex`: `0` (`0x0`)
  * 64-Bit Integer `BMDDeckLinkPersistentID`: `3973404288` (`0xECD55680`)
  * 64-Bit Integer `BMDDeckLinkTopologicalID`: `5246208` (`0x500D00`)
  * 64-Bit Integer `BMDDeckLinkVideoOutputConnections`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `BMDDeckLinkVideoInputConnections`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `BMDDeckLinkAudioOutputConnections`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * 64-Bit Integer `BMDDeckLinkAudioInputConnections`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * 64-Bit Integer `BMDDeckLinkDeviceBusyState`: `0` (`0x0`)
  * 64-Bit Integer `BMDDeckLinkVideoIOSupport`: `3` (`0x3`)

### Configuration

  * Flag (32-Bit Integer) `bmdDeckLinkConfigUse1080pNotPsF`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigFieldFlickerRemoval`: `1` (`0x1`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfig444SDIVideoOutput`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigSingleLinkVideoOutput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigLowLatencyVideoOutput`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigSMPTELevelAOutput`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputConnection`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputConversionMode`: `1852796517` (`0x6E6F6E65` - `none`) // `bmdNoVideoOutputConversion`
  * 64-Bit Integer `bmdDeckLinkConfigReferenceInputTimingOffset`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputIdleOperation`: `1651269987` (`0x626C6163` - `blac`)
  * 64-Bit Integer `bmdDeckLinkConfigDefaultVideoOutputMode`: `1885432864` (`0x70616C20` - `pal `) // `bmdModePAL`
  * 64-Bit Integer `bmdDeckLinkConfigDefaultVideoOutputModeFlags`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoInputConnection`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `bmdDeckLinkConfigVideoInputConversionMode`: `1852796517` (`0x6E6F6E65` - `none`) // `bmdNoVideoInputConversion`
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine1Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine2Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine3Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigCapturePassThroughMode`: `1885564014` (`0x70636C6E` - `pcln`)
  * 64-Bit Integer `bmdDeckLinkConfigAudioInputConnection`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * String `bmdDeckLinkConfigDeviceInformationLabel`: ``
  * String `bmdDeckLinkConfigDeviceInformationSerialNumber`: ``
  * String `bmdDeckLinkConfigDeviceInformationCompany`: ``
  * String `bmdDeckLinkConfigDeviceInformationPhone`: ``
  * String `bmdDeckLinkConfigDeviceInformationEmail`: ``
  * String `bmdDeckLinkConfigDeviceInformationDate`: ``

### Input Display Modes

 * NTSC:
  * Mode: `bmdModeNTSC` (`ntsc`)
  * Resolution: `720` x `486`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdLowerFieldFirst` (`lowr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * PAL:
  * Mode: `bmdModePAL` (`pal `)
  * Resolution: `720` x `576`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p23.98:
  * Mode: `bmdModeHD1080p2398` (`23ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p24:
  * Mode: `bmdModeHD1080p24` (`24ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p25:
  * Mode: `bmdModeHD1080p25` (`Hp25`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p29.97:
  * Mode: `bmdModeHD1080p2997` (`Hp29`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p30:
  * Mode: `bmdModeHD1080p30` (`Hp30`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i50:
  * Mode: `bmdModeHD1080i50` (`Hi50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i59.94:
  * Mode: `bmdModeHD1080i5994` (`Hi59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i60:
  * Mode: `bmdModeHD1080i6000` (`Hi60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p50:
  * Mode: `bmdModeHD1080p50` (`Hp50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p59.94:
  * Mode: `bmdModeHD1080p5994` (`Hp59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p60:
  * Mode: `bmdModeHD1080p6000` (`Hp60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 720p50:
  * Mode: `bmdModeHD720p50` (`hp50`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p59.94:
  * Mode: `bmdModeHD720p5994` (`hp59`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p60:
  * Mode: `bmdModeHD720p60` (`hp60`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)

TSV Formatted:

	Name	Display Mode	Display Mode FourCC	Resolution Width	Resolution Height	Frame Duration	Time Scale	Frame Rate, per second	Frame Length, millisecond	Field Dominance	Field Dominance FourCC	Display Mode Flags	Pixel Formats
	NTSC	bmdModeNTSC	ntsc	720	486	1001	30000	29.970	333666	bmdLowerFieldFirst	lowr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	PAL	bmdModePAL	pal 	720	576	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p23.98	bmdModeHD1080p2398	23ps	1920	1080	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p24	bmdModeHD1080p24	24ps	1920	1080	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p25	bmdModeHD1080p25	Hp25	1920	1080	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p29.97	bmdModeHD1080p2997	Hp29	1920	1080	1001	30000	29.970	333666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p30	bmdModeHD1080p30	Hp30	1920	1080	1000	30000	30.000	333333	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i50	bmdModeHD1080i50	Hi50	1920	1080	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i59.94	bmdModeHD1080i5994	Hi59	1920	1080	1001	30000	29.970	333666	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i60	bmdModeHD1080i6000	Hi60	1920	1080	1000	30000	30.000	333333	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p50	bmdModeHD1080p50	Hp50	1920	1080	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p59.94	bmdModeHD1080p5994	Hp59	1920	1080	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p60	bmdModeHD1080p6000	Hp60	1920	1080	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	720p50	bmdModeHD720p50	hp50	1280	720	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p59.94	bmdModeHD720p5994	hp59	1280	720	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p60	bmdModeHD720p60	hp60	1280	720	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B


### Output Display Modes

 * NTSC:
  * Mode: `bmdModeNTSC` (`ntsc`)
  * Resolution: `720` x `486`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdLowerFieldFirst` (`lowr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * PAL:
  * Mode: `bmdModePAL` (`pal `)
  * Resolution: `720` x `576`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p23.98:
  * Mode: `bmdModeHD1080p2398` (`23ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p24:
  * Mode: `bmdModeHD1080p24` (`24ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p25:
  * Mode: `bmdModeHD1080p25` (`Hp25`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p29.97:
  * Mode: `bmdModeHD1080p2997` (`Hp29`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p30:
  * Mode: `bmdModeHD1080p30` (`Hp30`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i50:
  * Mode: `bmdModeHD1080i50` (`Hi50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i59.94:
  * Mode: `bmdModeHD1080i5994` (`Hi59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i60:
  * Mode: `bmdModeHD1080i6000` (`Hi60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p50:
  * Mode: `bmdModeHD1080p50` (`Hp50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p59.94:
  * Mode: `bmdModeHD1080p5994` (`Hp59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p60:
  * Mode: `bmdModeHD1080p6000` (`Hp60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 720p50:
  * Mode: `bmdModeHD720p50` (`hp50`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p59.94:
  * Mode: `bmdModeHD720p5994` (`hp59`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p60:
  * Mode: `bmdModeHD720p60` (`hp60`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)

TSV Formatted:

	Name	Display Mode	Display Mode FourCC	Resolution Width	Resolution Height	Frame Duration	Time Scale	Frame Rate, per second	Frame Length, millisecond	Field Dominance	Field Dominance FourCC	Display Mode Flags	Pixel Formats
	NTSC	bmdModeNTSC	ntsc	720	486	1001	30000	29.970	333666	bmdLowerFieldFirst	lowr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	PAL	bmdModePAL	pal 	720	576	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p23.98	bmdModeHD1080p2398	23ps	1920	1080	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p24	bmdModeHD1080p24	24ps	1920	1080	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p25	bmdModeHD1080p25	Hp25	1920	1080	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p29.97	bmdModeHD1080p2997	Hp29	1920	1080	1001	30000	29.970	333666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p30	bmdModeHD1080p30	Hp30	1920	1080	1000	30000	30.000	333333	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i50	bmdModeHD1080i50	Hi50	1920	1080	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i59.94	bmdModeHD1080i5994	Hi59	1920	1080	1001	30000	29.970	333666	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i60	bmdModeHD1080i6000	Hi60	1920	1080	1000	30000	30.000	333333	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p50	bmdModeHD1080p50	Hp50	1920	1080	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p59.94	bmdModeHD1080p5994	Hp59	1920	1080	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p60	bmdModeHD1080p6000	Hp60	1920	1080	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	720p50	bmdModeHD720p50	hp50	1280	720	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p59.94	bmdModeHD720p5994	hp59	1280	720	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p60	bmdModeHD720p60	hp60	1280	720	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B



## DeckLink Quad (2) (DeckLink Quad 2)

 * Model Name: DeckLink Quad 2
 * Display Name: DeckLink Quad (2)
 * Interfaces:
  * `IDeckLink`
  * `IDeckLink_v8_0`
  * `IDeckLinkInput`
  * `IDeckLinkInput_v7_1`
  * `IDeckLinkInput_v7_3`
  * `IDeckLinkInput_v7_6`
  * `IDeckLinkInput_v9_2`
  * `IDeckLinkOutput`
  * `IDeckLinkOutput_v7_1`
  * `IDeckLinkOutput_v7_3`
  * `IDeckLinkOutput_v7_6`
  * `IDeckLinkOutput_v9_9`
  * `IDeckLinkConfiguration`
  * `IDeckLinkConfiguration_v7_6`
  * `IDeckLinkConfiguration_v10_2`
  * `IDeckLinkAttributes`
  * `IDeckLinkKeyer`
  * `IDeckLinkDeckControl`
  * `IDeckLinkDeckControl_v7_9`
  * `IDeckLinkDeckControl_v8_1`

### Attributes

  * Flag (32-Bit Integer) `BMDDeckLinkSupportsInternalKeying`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsExternalKeying`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsHDKeying`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsInputFormatDetection`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasReferenceInput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasSerialPort`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasVideoInputAntiAliasingFilter`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasBypass`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsDesktopDisplay`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsClockTimingAdjustment`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsFullDuplex`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsFullFrameReferenceInputTimingOffset`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsSMPTELevelAOutput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasAllAnalogOutputConnectionsActive`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsAutoSwitchingPPsFOnInput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsDualLinkSDI`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsIdleOutput`: `1` (`0x1`)
  * 64-Bit Integer `BMDDeckLinkMaximumAudioChannels`: `16` (`0x10`)
  * 64-Bit Integer `BMDDeckLinkNumberOfSubDevices`: `8` (`0x8`)
  * 64-Bit Integer `BMDDeckLinkSubDeviceIndex`: `1` (`0x1`)
  * 64-Bit Integer `BMDDeckLinkPersistentID`: `3973404289` (`0xECD55681`)
  * 64-Bit Integer `BMDDeckLinkTopologicalID`: `5246210` (`0x500D02`)
  * 64-Bit Integer `BMDDeckLinkVideoOutputConnections`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `BMDDeckLinkVideoInputConnections`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `BMDDeckLinkAudioOutputConnections`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * 64-Bit Integer `BMDDeckLinkAudioInputConnections`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * 64-Bit Integer `BMDDeckLinkDeviceBusyState`: `0` (`0x0`)
  * 64-Bit Integer `BMDDeckLinkVideoIOSupport`: `3` (`0x3`)

### Configuration

  * Flag (32-Bit Integer) `bmdDeckLinkConfigUse1080pNotPsF`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigFieldFlickerRemoval`: `1` (`0x1`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfig444SDIVideoOutput`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigSingleLinkVideoOutput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigLowLatencyVideoOutput`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigSMPTELevelAOutput`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputConnection`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputConversionMode`: `1852796517` (`0x6E6F6E65` - `none`) // `bmdNoVideoOutputConversion`
  * 64-Bit Integer `bmdDeckLinkConfigReferenceInputTimingOffset`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputIdleOperation`: `1651269987` (`0x626C6163` - `blac`)
  * 64-Bit Integer `bmdDeckLinkConfigDefaultVideoOutputMode`: `1885432864` (`0x70616C20` - `pal `) // `bmdModePAL`
  * 64-Bit Integer `bmdDeckLinkConfigDefaultVideoOutputModeFlags`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoInputConnection`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `bmdDeckLinkConfigVideoInputConversionMode`: `1852796517` (`0x6E6F6E65` - `none`) // `bmdNoVideoInputConversion`
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine1Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine2Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine3Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigCapturePassThroughMode`: `1885564014` (`0x70636C6E` - `pcln`)
  * 64-Bit Integer `bmdDeckLinkConfigAudioInputConnection`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * String `bmdDeckLinkConfigDeviceInformationLabel`: ``
  * String `bmdDeckLinkConfigDeviceInformationSerialNumber`: ``
  * String `bmdDeckLinkConfigDeviceInformationCompany`: ``
  * String `bmdDeckLinkConfigDeviceInformationPhone`: ``
  * String `bmdDeckLinkConfigDeviceInformationEmail`: ``
  * String `bmdDeckLinkConfigDeviceInformationDate`: ``

### Input Display Modes

 * NTSC:
  * Mode: `bmdModeNTSC` (`ntsc`)
  * Resolution: `720` x `486`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdLowerFieldFirst` (`lowr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * PAL:
  * Mode: `bmdModePAL` (`pal `)
  * Resolution: `720` x `576`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p23.98:
  * Mode: `bmdModeHD1080p2398` (`23ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p24:
  * Mode: `bmdModeHD1080p24` (`24ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p25:
  * Mode: `bmdModeHD1080p25` (`Hp25`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p29.97:
  * Mode: `bmdModeHD1080p2997` (`Hp29`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p30:
  * Mode: `bmdModeHD1080p30` (`Hp30`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i50:
  * Mode: `bmdModeHD1080i50` (`Hi50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i59.94:
  * Mode: `bmdModeHD1080i5994` (`Hi59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i60:
  * Mode: `bmdModeHD1080i6000` (`Hi60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p50:
  * Mode: `bmdModeHD1080p50` (`Hp50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p59.94:
  * Mode: `bmdModeHD1080p5994` (`Hp59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p60:
  * Mode: `bmdModeHD1080p6000` (`Hp60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 720p50:
  * Mode: `bmdModeHD720p50` (`hp50`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p59.94:
  * Mode: `bmdModeHD720p5994` (`hp59`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p60:
  * Mode: `bmdModeHD720p60` (`hp60`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)

TSV Formatted:

	Name	Display Mode	Display Mode FourCC	Resolution Width	Resolution Height	Frame Duration	Time Scale	Frame Rate, per second	Frame Length, millisecond	Field Dominance	Field Dominance FourCC	Display Mode Flags	Pixel Formats
	NTSC	bmdModeNTSC	ntsc	720	486	1001	30000	29.970	333666	bmdLowerFieldFirst	lowr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	PAL	bmdModePAL	pal 	720	576	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p23.98	bmdModeHD1080p2398	23ps	1920	1080	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p24	bmdModeHD1080p24	24ps	1920	1080	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p25	bmdModeHD1080p25	Hp25	1920	1080	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p29.97	bmdModeHD1080p2997	Hp29	1920	1080	1001	30000	29.970	333666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p30	bmdModeHD1080p30	Hp30	1920	1080	1000	30000	30.000	333333	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i50	bmdModeHD1080i50	Hi50	1920	1080	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i59.94	bmdModeHD1080i5994	Hi59	1920	1080	1001	30000	29.970	333666	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i60	bmdModeHD1080i6000	Hi60	1920	1080	1000	30000	30.000	333333	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p50	bmdModeHD1080p50	Hp50	1920	1080	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p59.94	bmdModeHD1080p5994	Hp59	1920	1080	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p60	bmdModeHD1080p6000	Hp60	1920	1080	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	720p50	bmdModeHD720p50	hp50	1280	720	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p59.94	bmdModeHD720p5994	hp59	1280	720	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p60	bmdModeHD720p60	hp60	1280	720	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B


### Output Display Modes

 * NTSC:
  * Mode: `bmdModeNTSC` (`ntsc`)
  * Resolution: `720` x `486`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdLowerFieldFirst` (`lowr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * PAL:
  * Mode: `bmdModePAL` (`pal `)
  * Resolution: `720` x `576`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p23.98:
  * Mode: `bmdModeHD1080p2398` (`23ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p24:
  * Mode: `bmdModeHD1080p24` (`24ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p25:
  * Mode: `bmdModeHD1080p25` (`Hp25`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p29.97:
  * Mode: `bmdModeHD1080p2997` (`Hp29`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p30:
  * Mode: `bmdModeHD1080p30` (`Hp30`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i50:
  * Mode: `bmdModeHD1080i50` (`Hi50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i59.94:
  * Mode: `bmdModeHD1080i5994` (`Hi59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i60:
  * Mode: `bmdModeHD1080i6000` (`Hi60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p50:
  * Mode: `bmdModeHD1080p50` (`Hp50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p59.94:
  * Mode: `bmdModeHD1080p5994` (`Hp59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p60:
  * Mode: `bmdModeHD1080p6000` (`Hp60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 720p50:
  * Mode: `bmdModeHD720p50` (`hp50`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p59.94:
  * Mode: `bmdModeHD720p5994` (`hp59`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p60:
  * Mode: `bmdModeHD720p60` (`hp60`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)

TSV Formatted:

	Name	Display Mode	Display Mode FourCC	Resolution Width	Resolution Height	Frame Duration	Time Scale	Frame Rate, per second	Frame Length, millisecond	Field Dominance	Field Dominance FourCC	Display Mode Flags	Pixel Formats
	NTSC	bmdModeNTSC	ntsc	720	486	1001	30000	29.970	333666	bmdLowerFieldFirst	lowr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	PAL	bmdModePAL	pal 	720	576	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p23.98	bmdModeHD1080p2398	23ps	1920	1080	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p24	bmdModeHD1080p24	24ps	1920	1080	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p25	bmdModeHD1080p25	Hp25	1920	1080	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p29.97	bmdModeHD1080p2997	Hp29	1920	1080	1001	30000	29.970	333666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p30	bmdModeHD1080p30	Hp30	1920	1080	1000	30000	30.000	333333	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i50	bmdModeHD1080i50	Hi50	1920	1080	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i59.94	bmdModeHD1080i5994	Hi59	1920	1080	1001	30000	29.970	333666	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i60	bmdModeHD1080i6000	Hi60	1920	1080	1000	30000	30.000	333333	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p50	bmdModeHD1080p50	Hp50	1920	1080	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p59.94	bmdModeHD1080p5994	Hp59	1920	1080	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p60	bmdModeHD1080p6000	Hp60	1920	1080	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	720p50	bmdModeHD720p50	hp50	1280	720	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p59.94	bmdModeHD720p5994	hp59	1280	720	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p60	bmdModeHD720p60	hp60	1280	720	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B



## DeckLink Quad (3) (DeckLink Quad 2)

 * Model Name: DeckLink Quad 2
 * Display Name: DeckLink Quad (3)
 * Interfaces:
  * `IDeckLink`
  * `IDeckLink_v8_0`
  * `IDeckLinkInput`
  * `IDeckLinkInput_v7_1`
  * `IDeckLinkInput_v7_3`
  * `IDeckLinkInput_v7_6`
  * `IDeckLinkInput_v9_2`
  * `IDeckLinkOutput`
  * `IDeckLinkOutput_v7_1`
  * `IDeckLinkOutput_v7_3`
  * `IDeckLinkOutput_v7_6`
  * `IDeckLinkOutput_v9_9`
  * `IDeckLinkConfiguration`
  * `IDeckLinkConfiguration_v7_6`
  * `IDeckLinkConfiguration_v10_2`
  * `IDeckLinkAttributes`
  * `IDeckLinkKeyer`
  * `IDeckLinkDeckControl`
  * `IDeckLinkDeckControl_v7_9`
  * `IDeckLinkDeckControl_v8_1`

### Attributes

  * Flag (32-Bit Integer) `BMDDeckLinkSupportsInternalKeying`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsExternalKeying`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsHDKeying`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsInputFormatDetection`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasReferenceInput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasSerialPort`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasVideoInputAntiAliasingFilter`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasBypass`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsDesktopDisplay`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsClockTimingAdjustment`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsFullDuplex`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsFullFrameReferenceInputTimingOffset`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsSMPTELevelAOutput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasAllAnalogOutputConnectionsActive`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsAutoSwitchingPPsFOnInput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsDualLinkSDI`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsIdleOutput`: `1` (`0x1`)
  * 64-Bit Integer `BMDDeckLinkMaximumAudioChannels`: `16` (`0x10`)
  * 64-Bit Integer `BMDDeckLinkNumberOfSubDevices`: `8` (`0x8`)
  * 64-Bit Integer `BMDDeckLinkSubDeviceIndex`: `2` (`0x2`)
  * 64-Bit Integer `BMDDeckLinkPersistentID`: `3973404290` (`0xECD55682`)
  * 64-Bit Integer `BMDDeckLinkTopologicalID`: `5246464` (`0x500E00`)
  * 64-Bit Integer `BMDDeckLinkVideoOutputConnections`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `BMDDeckLinkVideoInputConnections`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `BMDDeckLinkAudioOutputConnections`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * 64-Bit Integer `BMDDeckLinkAudioInputConnections`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * 64-Bit Integer `BMDDeckLinkDeviceBusyState`: `0` (`0x0`)
  * 64-Bit Integer `BMDDeckLinkVideoIOSupport`: `3` (`0x3`)

### Configuration

  * Flag (32-Bit Integer) `bmdDeckLinkConfigUse1080pNotPsF`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigFieldFlickerRemoval`: `1` (`0x1`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfig444SDIVideoOutput`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigSingleLinkVideoOutput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigLowLatencyVideoOutput`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigSMPTELevelAOutput`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputConnection`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputConversionMode`: `1852796517` (`0x6E6F6E65` - `none`) // `bmdNoVideoOutputConversion`
  * 64-Bit Integer `bmdDeckLinkConfigReferenceInputTimingOffset`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputIdleOperation`: `1651269987` (`0x626C6163` - `blac`)
  * 64-Bit Integer `bmdDeckLinkConfigDefaultVideoOutputMode`: `1885432864` (`0x70616C20` - `pal `) // `bmdModePAL`
  * 64-Bit Integer `bmdDeckLinkConfigDefaultVideoOutputModeFlags`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoInputConnection`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `bmdDeckLinkConfigVideoInputConversionMode`: `1852796517` (`0x6E6F6E65` - `none`) // `bmdNoVideoInputConversion`
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine1Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine2Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine3Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigCapturePassThroughMode`: `1885564014` (`0x70636C6E` - `pcln`)
  * 64-Bit Integer `bmdDeckLinkConfigAudioInputConnection`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * String `bmdDeckLinkConfigDeviceInformationLabel`: ``
  * String `bmdDeckLinkConfigDeviceInformationSerialNumber`: ``
  * String `bmdDeckLinkConfigDeviceInformationCompany`: ``
  * String `bmdDeckLinkConfigDeviceInformationPhone`: ``
  * String `bmdDeckLinkConfigDeviceInformationEmail`: ``
  * String `bmdDeckLinkConfigDeviceInformationDate`: ``

### Input Display Modes

 * NTSC:
  * Mode: `bmdModeNTSC` (`ntsc`)
  * Resolution: `720` x `486`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdLowerFieldFirst` (`lowr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * PAL:
  * Mode: `bmdModePAL` (`pal `)
  * Resolution: `720` x `576`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p23.98:
  * Mode: `bmdModeHD1080p2398` (`23ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p24:
  * Mode: `bmdModeHD1080p24` (`24ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p25:
  * Mode: `bmdModeHD1080p25` (`Hp25`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p29.97:
  * Mode: `bmdModeHD1080p2997` (`Hp29`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p30:
  * Mode: `bmdModeHD1080p30` (`Hp30`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i50:
  * Mode: `bmdModeHD1080i50` (`Hi50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i59.94:
  * Mode: `bmdModeHD1080i5994` (`Hi59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i60:
  * Mode: `bmdModeHD1080i6000` (`Hi60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p50:
  * Mode: `bmdModeHD1080p50` (`Hp50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p59.94:
  * Mode: `bmdModeHD1080p5994` (`Hp59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p60:
  * Mode: `bmdModeHD1080p6000` (`Hp60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 720p50:
  * Mode: `bmdModeHD720p50` (`hp50`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p59.94:
  * Mode: `bmdModeHD720p5994` (`hp59`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p60:
  * Mode: `bmdModeHD720p60` (`hp60`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)

TSV Formatted:

	Name	Display Mode	Display Mode FourCC	Resolution Width	Resolution Height	Frame Duration	Time Scale	Frame Rate, per second	Frame Length, millisecond	Field Dominance	Field Dominance FourCC	Display Mode Flags	Pixel Formats
	NTSC	bmdModeNTSC	ntsc	720	486	1001	30000	29.970	333666	bmdLowerFieldFirst	lowr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	PAL	bmdModePAL	pal 	720	576	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p23.98	bmdModeHD1080p2398	23ps	1920	1080	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p24	bmdModeHD1080p24	24ps	1920	1080	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p25	bmdModeHD1080p25	Hp25	1920	1080	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p29.97	bmdModeHD1080p2997	Hp29	1920	1080	1001	30000	29.970	333666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p30	bmdModeHD1080p30	Hp30	1920	1080	1000	30000	30.000	333333	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i50	bmdModeHD1080i50	Hi50	1920	1080	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i59.94	bmdModeHD1080i5994	Hi59	1920	1080	1001	30000	29.970	333666	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i60	bmdModeHD1080i6000	Hi60	1920	1080	1000	30000	30.000	333333	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p50	bmdModeHD1080p50	Hp50	1920	1080	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p59.94	bmdModeHD1080p5994	Hp59	1920	1080	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p60	bmdModeHD1080p6000	Hp60	1920	1080	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	720p50	bmdModeHD720p50	hp50	1280	720	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p59.94	bmdModeHD720p5994	hp59	1280	720	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p60	bmdModeHD720p60	hp60	1280	720	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B


### Output Display Modes

 * NTSC:
  * Mode: `bmdModeNTSC` (`ntsc`)
  * Resolution: `720` x `486`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdLowerFieldFirst` (`lowr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * PAL:
  * Mode: `bmdModePAL` (`pal `)
  * Resolution: `720` x `576`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p23.98:
  * Mode: `bmdModeHD1080p2398` (`23ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p24:
  * Mode: `bmdModeHD1080p24` (`24ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p25:
  * Mode: `bmdModeHD1080p25` (`Hp25`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p29.97:
  * Mode: `bmdModeHD1080p2997` (`Hp29`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p30:
  * Mode: `bmdModeHD1080p30` (`Hp30`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i50:
  * Mode: `bmdModeHD1080i50` (`Hi50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i59.94:
  * Mode: `bmdModeHD1080i5994` (`Hi59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i60:
  * Mode: `bmdModeHD1080i6000` (`Hi60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p50:
  * Mode: `bmdModeHD1080p50` (`Hp50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p59.94:
  * Mode: `bmdModeHD1080p5994` (`Hp59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p60:
  * Mode: `bmdModeHD1080p6000` (`Hp60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 720p50:
  * Mode: `bmdModeHD720p50` (`hp50`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p59.94:
  * Mode: `bmdModeHD720p5994` (`hp59`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p60:
  * Mode: `bmdModeHD720p60` (`hp60`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)

TSV Formatted:

	Name	Display Mode	Display Mode FourCC	Resolution Width	Resolution Height	Frame Duration	Time Scale	Frame Rate, per second	Frame Length, millisecond	Field Dominance	Field Dominance FourCC	Display Mode Flags	Pixel Formats
	NTSC	bmdModeNTSC	ntsc	720	486	1001	30000	29.970	333666	bmdLowerFieldFirst	lowr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	PAL	bmdModePAL	pal 	720	576	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p23.98	bmdModeHD1080p2398	23ps	1920	1080	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p24	bmdModeHD1080p24	24ps	1920	1080	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p25	bmdModeHD1080p25	Hp25	1920	1080	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p29.97	bmdModeHD1080p2997	Hp29	1920	1080	1001	30000	29.970	333666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p30	bmdModeHD1080p30	Hp30	1920	1080	1000	30000	30.000	333333	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i50	bmdModeHD1080i50	Hi50	1920	1080	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i59.94	bmdModeHD1080i5994	Hi59	1920	1080	1001	30000	29.970	333666	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i60	bmdModeHD1080i6000	Hi60	1920	1080	1000	30000	30.000	333333	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p50	bmdModeHD1080p50	Hp50	1920	1080	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p59.94	bmdModeHD1080p5994	Hp59	1920	1080	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p60	bmdModeHD1080p6000	Hp60	1920	1080	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	720p50	bmdModeHD720p50	hp50	1280	720	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p59.94	bmdModeHD720p5994	hp59	1280	720	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p60	bmdModeHD720p60	hp60	1280	720	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B



## DeckLink Quad (4) (DeckLink Quad 2)

 * Model Name: DeckLink Quad 2
 * Display Name: DeckLink Quad (4)
 * Interfaces:
  * `IDeckLink`
  * `IDeckLink_v8_0`
  * `IDeckLinkInput`
  * `IDeckLinkInput_v7_1`
  * `IDeckLinkInput_v7_3`
  * `IDeckLinkInput_v7_6`
  * `IDeckLinkInput_v9_2`
  * `IDeckLinkOutput`
  * `IDeckLinkOutput_v7_1`
  * `IDeckLinkOutput_v7_3`
  * `IDeckLinkOutput_v7_6`
  * `IDeckLinkOutput_v9_9`
  * `IDeckLinkConfiguration`
  * `IDeckLinkConfiguration_v7_6`
  * `IDeckLinkConfiguration_v10_2`
  * `IDeckLinkAttributes`
  * `IDeckLinkKeyer`
  * `IDeckLinkDeckControl`
  * `IDeckLinkDeckControl_v7_9`
  * `IDeckLinkDeckControl_v8_1`

### Attributes

  * Flag (32-Bit Integer) `BMDDeckLinkSupportsInternalKeying`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsExternalKeying`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsHDKeying`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsInputFormatDetection`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasReferenceInput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasSerialPort`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasVideoInputAntiAliasingFilter`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasBypass`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsDesktopDisplay`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsClockTimingAdjustment`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsFullDuplex`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsFullFrameReferenceInputTimingOffset`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsSMPTELevelAOutput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasAllAnalogOutputConnectionsActive`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsAutoSwitchingPPsFOnInput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsDualLinkSDI`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsIdleOutput`: `1` (`0x1`)
  * 64-Bit Integer `BMDDeckLinkMaximumAudioChannels`: `16` (`0x10`)
  * 64-Bit Integer `BMDDeckLinkNumberOfSubDevices`: `8` (`0x8`)
  * 64-Bit Integer `BMDDeckLinkSubDeviceIndex`: `3` (`0x3`)
  * 64-Bit Integer `BMDDeckLinkPersistentID`: `3973404291` (`0xECD55683`)
  * 64-Bit Integer `BMDDeckLinkTopologicalID`: `5246466` (`0x500E02`)
  * 64-Bit Integer `BMDDeckLinkVideoOutputConnections`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `BMDDeckLinkVideoInputConnections`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `BMDDeckLinkAudioOutputConnections`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * 64-Bit Integer `BMDDeckLinkAudioInputConnections`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * 64-Bit Integer `BMDDeckLinkDeviceBusyState`: `0` (`0x0`)
  * 64-Bit Integer `BMDDeckLinkVideoIOSupport`: `3` (`0x3`)

### Configuration

  * Flag (32-Bit Integer) `bmdDeckLinkConfigUse1080pNotPsF`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigFieldFlickerRemoval`: `1` (`0x1`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfig444SDIVideoOutput`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigSingleLinkVideoOutput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigLowLatencyVideoOutput`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigSMPTELevelAOutput`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputConnection`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputConversionMode`: `1852796517` (`0x6E6F6E65` - `none`) // `bmdNoVideoOutputConversion`
  * 64-Bit Integer `bmdDeckLinkConfigReferenceInputTimingOffset`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputIdleOperation`: `1651269987` (`0x626C6163` - `blac`)
  * 64-Bit Integer `bmdDeckLinkConfigDefaultVideoOutputMode`: `1885432864` (`0x70616C20` - `pal `) // `bmdModePAL`
  * 64-Bit Integer `bmdDeckLinkConfigDefaultVideoOutputModeFlags`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoInputConnection`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `bmdDeckLinkConfigVideoInputConversionMode`: `1852796517` (`0x6E6F6E65` - `none`) // `bmdNoVideoInputConversion`
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine1Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine2Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine3Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigCapturePassThroughMode`: `1885564014` (`0x70636C6E` - `pcln`)
  * 64-Bit Integer `bmdDeckLinkConfigAudioInputConnection`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * String `bmdDeckLinkConfigDeviceInformationLabel`: ``
  * String `bmdDeckLinkConfigDeviceInformationSerialNumber`: ``
  * String `bmdDeckLinkConfigDeviceInformationCompany`: ``
  * String `bmdDeckLinkConfigDeviceInformationPhone`: ``
  * String `bmdDeckLinkConfigDeviceInformationEmail`: ``
  * String `bmdDeckLinkConfigDeviceInformationDate`: ``

### Input Display Modes

 * NTSC:
  * Mode: `bmdModeNTSC` (`ntsc`)
  * Resolution: `720` x `486`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdLowerFieldFirst` (`lowr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * PAL:
  * Mode: `bmdModePAL` (`pal `)
  * Resolution: `720` x `576`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p23.98:
  * Mode: `bmdModeHD1080p2398` (`23ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p24:
  * Mode: `bmdModeHD1080p24` (`24ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p25:
  * Mode: `bmdModeHD1080p25` (`Hp25`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p29.97:
  * Mode: `bmdModeHD1080p2997` (`Hp29`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p30:
  * Mode: `bmdModeHD1080p30` (`Hp30`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i50:
  * Mode: `bmdModeHD1080i50` (`Hi50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i59.94:
  * Mode: `bmdModeHD1080i5994` (`Hi59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i60:
  * Mode: `bmdModeHD1080i6000` (`Hi60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p50:
  * Mode: `bmdModeHD1080p50` (`Hp50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p59.94:
  * Mode: `bmdModeHD1080p5994` (`Hp59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p60:
  * Mode: `bmdModeHD1080p6000` (`Hp60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 720p50:
  * Mode: `bmdModeHD720p50` (`hp50`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p59.94:
  * Mode: `bmdModeHD720p5994` (`hp59`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p60:
  * Mode: `bmdModeHD720p60` (`hp60`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)

TSV Formatted:

	Name	Display Mode	Display Mode FourCC	Resolution Width	Resolution Height	Frame Duration	Time Scale	Frame Rate, per second	Frame Length, millisecond	Field Dominance	Field Dominance FourCC	Display Mode Flags	Pixel Formats
	NTSC	bmdModeNTSC	ntsc	720	486	1001	30000	29.970	333666	bmdLowerFieldFirst	lowr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	PAL	bmdModePAL	pal 	720	576	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p23.98	bmdModeHD1080p2398	23ps	1920	1080	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p24	bmdModeHD1080p24	24ps	1920	1080	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p25	bmdModeHD1080p25	Hp25	1920	1080	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p29.97	bmdModeHD1080p2997	Hp29	1920	1080	1001	30000	29.970	333666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p30	bmdModeHD1080p30	Hp30	1920	1080	1000	30000	30.000	333333	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i50	bmdModeHD1080i50	Hi50	1920	1080	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i59.94	bmdModeHD1080i5994	Hi59	1920	1080	1001	30000	29.970	333666	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i60	bmdModeHD1080i6000	Hi60	1920	1080	1000	30000	30.000	333333	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p50	bmdModeHD1080p50	Hp50	1920	1080	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p59.94	bmdModeHD1080p5994	Hp59	1920	1080	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p60	bmdModeHD1080p6000	Hp60	1920	1080	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	720p50	bmdModeHD720p50	hp50	1280	720	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p59.94	bmdModeHD720p5994	hp59	1280	720	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p60	bmdModeHD720p60	hp60	1280	720	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B


### Output Display Modes

 * NTSC:
  * Mode: `bmdModeNTSC` (`ntsc`)
  * Resolution: `720` x `486`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdLowerFieldFirst` (`lowr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * PAL:
  * Mode: `bmdModePAL` (`pal `)
  * Resolution: `720` x `576`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p23.98:
  * Mode: `bmdModeHD1080p2398` (`23ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p24:
  * Mode: `bmdModeHD1080p24` (`24ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p25:
  * Mode: `bmdModeHD1080p25` (`Hp25`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p29.97:
  * Mode: `bmdModeHD1080p2997` (`Hp29`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p30:
  * Mode: `bmdModeHD1080p30` (`Hp30`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i50:
  * Mode: `bmdModeHD1080i50` (`Hi50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i59.94:
  * Mode: `bmdModeHD1080i5994` (`Hi59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i60:
  * Mode: `bmdModeHD1080i6000` (`Hi60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p50:
  * Mode: `bmdModeHD1080p50` (`Hp50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p59.94:
  * Mode: `bmdModeHD1080p5994` (`Hp59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p60:
  * Mode: `bmdModeHD1080p6000` (`Hp60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 720p50:
  * Mode: `bmdModeHD720p50` (`hp50`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p59.94:
  * Mode: `bmdModeHD720p5994` (`hp59`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p60:
  * Mode: `bmdModeHD720p60` (`hp60`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)

TSV Formatted:

	Name	Display Mode	Display Mode FourCC	Resolution Width	Resolution Height	Frame Duration	Time Scale	Frame Rate, per second	Frame Length, millisecond	Field Dominance	Field Dominance FourCC	Display Mode Flags	Pixel Formats
	NTSC	bmdModeNTSC	ntsc	720	486	1001	30000	29.970	333666	bmdLowerFieldFirst	lowr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	PAL	bmdModePAL	pal 	720	576	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p23.98	bmdModeHD1080p2398	23ps	1920	1080	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p24	bmdModeHD1080p24	24ps	1920	1080	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p25	bmdModeHD1080p25	Hp25	1920	1080	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p29.97	bmdModeHD1080p2997	Hp29	1920	1080	1001	30000	29.970	333666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p30	bmdModeHD1080p30	Hp30	1920	1080	1000	30000	30.000	333333	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i50	bmdModeHD1080i50	Hi50	1920	1080	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i59.94	bmdModeHD1080i5994	Hi59	1920	1080	1001	30000	29.970	333666	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i60	bmdModeHD1080i6000	Hi60	1920	1080	1000	30000	30.000	333333	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p50	bmdModeHD1080p50	Hp50	1920	1080	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p59.94	bmdModeHD1080p5994	Hp59	1920	1080	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p60	bmdModeHD1080p6000	Hp60	1920	1080	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	720p50	bmdModeHD720p50	hp50	1280	720	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p59.94	bmdModeHD720p5994	hp59	1280	720	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p60	bmdModeHD720p60	hp60	1280	720	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B



## DeckLink Quad (5) (DeckLink Quad 2)

 * Model Name: DeckLink Quad 2
 * Display Name: DeckLink Quad (5)
 * Interfaces:
  * `IDeckLink`
  * `IDeckLink_v8_0`
  * `IDeckLinkInput`
  * `IDeckLinkInput_v7_1`
  * `IDeckLinkInput_v7_3`
  * `IDeckLinkInput_v7_6`
  * `IDeckLinkInput_v9_2`
  * `IDeckLinkOutput`
  * `IDeckLinkOutput_v7_1`
  * `IDeckLinkOutput_v7_3`
  * `IDeckLinkOutput_v7_6`
  * `IDeckLinkOutput_v9_9`
  * `IDeckLinkConfiguration`
  * `IDeckLinkConfiguration_v7_6`
  * `IDeckLinkConfiguration_v10_2`
  * `IDeckLinkAttributes`
  * `IDeckLinkDeckControl`
  * `IDeckLinkDeckControl_v7_9`
  * `IDeckLinkDeckControl_v8_1`

### Attributes

  * Flag (32-Bit Integer) `BMDDeckLinkSupportsInternalKeying`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsExternalKeying`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsHDKeying`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsInputFormatDetection`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasReferenceInput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasSerialPort`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasVideoInputAntiAliasingFilter`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasBypass`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsDesktopDisplay`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsClockTimingAdjustment`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsFullDuplex`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsFullFrameReferenceInputTimingOffset`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsSMPTELevelAOutput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasAllAnalogOutputConnectionsActive`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsAutoSwitchingPPsFOnInput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsDualLinkSDI`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsIdleOutput`: `1` (`0x1`)
  * 64-Bit Integer `BMDDeckLinkMaximumAudioChannels`: `16` (`0x10`)
  * 64-Bit Integer `BMDDeckLinkNumberOfSubDevices`: `8` (`0x8`)
  * 64-Bit Integer `BMDDeckLinkSubDeviceIndex`: `4` (`0x4`)
  * 64-Bit Integer `BMDDeckLinkPersistentID`: `3973404292` (`0xECD55684`)
  * 64-Bit Integer `BMDDeckLinkTopologicalID`: `5246209` (`0x500D01`)
  * 64-Bit Integer `BMDDeckLinkVideoOutputConnections`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `BMDDeckLinkVideoInputConnections`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `BMDDeckLinkAudioOutputConnections`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * 64-Bit Integer `BMDDeckLinkAudioInputConnections`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * 64-Bit Integer `BMDDeckLinkDeviceBusyState`: `0` (`0x0`)
  * 64-Bit Integer `BMDDeckLinkVideoIOSupport`: `3` (`0x3`)

### Configuration

  * Flag (32-Bit Integer) `bmdDeckLinkConfigUse1080pNotPsF`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigFieldFlickerRemoval`: `1` (`0x1`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfig444SDIVideoOutput`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigSingleLinkVideoOutput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigLowLatencyVideoOutput`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigSMPTELevelAOutput`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputConnection`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputConversionMode`: `1852796517` (`0x6E6F6E65` - `none`) // `bmdNoVideoOutputConversion`
  * 64-Bit Integer `bmdDeckLinkConfigReferenceInputTimingOffset`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputIdleOperation`: `1651269987` (`0x626C6163` - `blac`)
  * 64-Bit Integer `bmdDeckLinkConfigDefaultVideoOutputMode`: `1885432864` (`0x70616C20` - `pal `) // `bmdModePAL`
  * 64-Bit Integer `bmdDeckLinkConfigDefaultVideoOutputModeFlags`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoInputConnection`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `bmdDeckLinkConfigVideoInputConversionMode`: `1852796517` (`0x6E6F6E65` - `none`) // `bmdNoVideoInputConversion`
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine1Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine2Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine3Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigCapturePassThroughMode`: `1885564014` (`0x70636C6E` - `pcln`)
  * 64-Bit Integer `bmdDeckLinkConfigAudioInputConnection`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * String `bmdDeckLinkConfigDeviceInformationLabel`: ``
  * String `bmdDeckLinkConfigDeviceInformationSerialNumber`: ``
  * String `bmdDeckLinkConfigDeviceInformationCompany`: ``
  * String `bmdDeckLinkConfigDeviceInformationPhone`: ``
  * String `bmdDeckLinkConfigDeviceInformationEmail`: ``
  * String `bmdDeckLinkConfigDeviceInformationDate`: ``

### Input Display Modes

 * NTSC:
  * Mode: `bmdModeNTSC` (`ntsc`)
  * Resolution: `720` x `486`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdLowerFieldFirst` (`lowr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * PAL:
  * Mode: `bmdModePAL` (`pal `)
  * Resolution: `720` x `576`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p23.98:
  * Mode: `bmdModeHD1080p2398` (`23ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p24:
  * Mode: `bmdModeHD1080p24` (`24ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p25:
  * Mode: `bmdModeHD1080p25` (`Hp25`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p29.97:
  * Mode: `bmdModeHD1080p2997` (`Hp29`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p30:
  * Mode: `bmdModeHD1080p30` (`Hp30`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i50:
  * Mode: `bmdModeHD1080i50` (`Hi50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i59.94:
  * Mode: `bmdModeHD1080i5994` (`Hi59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i60:
  * Mode: `bmdModeHD1080i6000` (`Hi60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p50:
  * Mode: `bmdModeHD1080p50` (`Hp50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p59.94:
  * Mode: `bmdModeHD1080p5994` (`Hp59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p60:
  * Mode: `bmdModeHD1080p6000` (`Hp60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 720p50:
  * Mode: `bmdModeHD720p50` (`hp50`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p59.94:
  * Mode: `bmdModeHD720p5994` (`hp59`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p60:
  * Mode: `bmdModeHD720p60` (`hp60`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)

TSV Formatted:

	Name	Display Mode	Display Mode FourCC	Resolution Width	Resolution Height	Frame Duration	Time Scale	Frame Rate, per second	Frame Length, millisecond	Field Dominance	Field Dominance FourCC	Display Mode Flags	Pixel Formats
	NTSC	bmdModeNTSC	ntsc	720	486	1001	30000	29.970	333666	bmdLowerFieldFirst	lowr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	PAL	bmdModePAL	pal 	720	576	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p23.98	bmdModeHD1080p2398	23ps	1920	1080	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p24	bmdModeHD1080p24	24ps	1920	1080	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p25	bmdModeHD1080p25	Hp25	1920	1080	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p29.97	bmdModeHD1080p2997	Hp29	1920	1080	1001	30000	29.970	333666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p30	bmdModeHD1080p30	Hp30	1920	1080	1000	30000	30.000	333333	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i50	bmdModeHD1080i50	Hi50	1920	1080	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i59.94	bmdModeHD1080i5994	Hi59	1920	1080	1001	30000	29.970	333666	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i60	bmdModeHD1080i6000	Hi60	1920	1080	1000	30000	30.000	333333	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p50	bmdModeHD1080p50	Hp50	1920	1080	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p59.94	bmdModeHD1080p5994	Hp59	1920	1080	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p60	bmdModeHD1080p6000	Hp60	1920	1080	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	720p50	bmdModeHD720p50	hp50	1280	720	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p59.94	bmdModeHD720p5994	hp59	1280	720	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p60	bmdModeHD720p60	hp60	1280	720	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B


### Output Display Modes

 * NTSC:
  * Mode: `bmdModeNTSC` (`ntsc`)
  * Resolution: `720` x `486`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdLowerFieldFirst` (`lowr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * PAL:
  * Mode: `bmdModePAL` (`pal `)
  * Resolution: `720` x `576`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p23.98:
  * Mode: `bmdModeHD1080p2398` (`23ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p24:
  * Mode: `bmdModeHD1080p24` (`24ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p25:
  * Mode: `bmdModeHD1080p25` (`Hp25`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p29.97:
  * Mode: `bmdModeHD1080p2997` (`Hp29`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p30:
  * Mode: `bmdModeHD1080p30` (`Hp30`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i50:
  * Mode: `bmdModeHD1080i50` (`Hi50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i59.94:
  * Mode: `bmdModeHD1080i5994` (`Hi59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i60:
  * Mode: `bmdModeHD1080i6000` (`Hi60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p50:
  * Mode: `bmdModeHD1080p50` (`Hp50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p59.94:
  * Mode: `bmdModeHD1080p5994` (`Hp59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p60:
  * Mode: `bmdModeHD1080p6000` (`Hp60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 720p50:
  * Mode: `bmdModeHD720p50` (`hp50`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p59.94:
  * Mode: `bmdModeHD720p5994` (`hp59`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p60:
  * Mode: `bmdModeHD720p60` (`hp60`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)

TSV Formatted:

	Name	Display Mode	Display Mode FourCC	Resolution Width	Resolution Height	Frame Duration	Time Scale	Frame Rate, per second	Frame Length, millisecond	Field Dominance	Field Dominance FourCC	Display Mode Flags	Pixel Formats
	NTSC	bmdModeNTSC	ntsc	720	486	1001	30000	29.970	333666	bmdLowerFieldFirst	lowr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	PAL	bmdModePAL	pal 	720	576	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p23.98	bmdModeHD1080p2398	23ps	1920	1080	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p24	bmdModeHD1080p24	24ps	1920	1080	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p25	bmdModeHD1080p25	Hp25	1920	1080	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p29.97	bmdModeHD1080p2997	Hp29	1920	1080	1001	30000	29.970	333666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p30	bmdModeHD1080p30	Hp30	1920	1080	1000	30000	30.000	333333	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i50	bmdModeHD1080i50	Hi50	1920	1080	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i59.94	bmdModeHD1080i5994	Hi59	1920	1080	1001	30000	29.970	333666	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i60	bmdModeHD1080i6000	Hi60	1920	1080	1000	30000	30.000	333333	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p50	bmdModeHD1080p50	Hp50	1920	1080	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p59.94	bmdModeHD1080p5994	Hp59	1920	1080	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p60	bmdModeHD1080p6000	Hp60	1920	1080	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	720p50	bmdModeHD720p50	hp50	1280	720	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p59.94	bmdModeHD720p5994	hp59	1280	720	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p60	bmdModeHD720p60	hp60	1280	720	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B



## DeckLink Quad (6) (DeckLink Quad 2)

 * Model Name: DeckLink Quad 2
 * Display Name: DeckLink Quad (6)
 * Interfaces:
  * `IDeckLink`
  * `IDeckLink_v8_0`
  * `IDeckLinkInput`
  * `IDeckLinkInput_v7_1`
  * `IDeckLinkInput_v7_3`
  * `IDeckLinkInput_v7_6`
  * `IDeckLinkInput_v9_2`
  * `IDeckLinkOutput`
  * `IDeckLinkOutput_v7_1`
  * `IDeckLinkOutput_v7_3`
  * `IDeckLinkOutput_v7_6`
  * `IDeckLinkOutput_v9_9`
  * `IDeckLinkConfiguration`
  * `IDeckLinkConfiguration_v7_6`
  * `IDeckLinkConfiguration_v10_2`
  * `IDeckLinkAttributes`
  * `IDeckLinkDeckControl`
  * `IDeckLinkDeckControl_v7_9`
  * `IDeckLinkDeckControl_v8_1`

### Attributes

  * Flag (32-Bit Integer) `BMDDeckLinkSupportsInternalKeying`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsExternalKeying`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsHDKeying`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsInputFormatDetection`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasReferenceInput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasSerialPort`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasVideoInputAntiAliasingFilter`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasBypass`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsDesktopDisplay`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsClockTimingAdjustment`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsFullDuplex`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsFullFrameReferenceInputTimingOffset`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsSMPTELevelAOutput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasAllAnalogOutputConnectionsActive`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsAutoSwitchingPPsFOnInput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsDualLinkSDI`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsIdleOutput`: `1` (`0x1`)
  * 64-Bit Integer `BMDDeckLinkMaximumAudioChannels`: `16` (`0x10`)
  * 64-Bit Integer `BMDDeckLinkNumberOfSubDevices`: `8` (`0x8`)
  * 64-Bit Integer `BMDDeckLinkSubDeviceIndex`: `5` (`0x5`)
  * 64-Bit Integer `BMDDeckLinkPersistentID`: `3973404293` (`0xECD55685`)
  * 64-Bit Integer `BMDDeckLinkTopologicalID`: `5246211` (`0x500D03`)
  * 64-Bit Integer `BMDDeckLinkVideoOutputConnections`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `BMDDeckLinkVideoInputConnections`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `BMDDeckLinkAudioOutputConnections`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * 64-Bit Integer `BMDDeckLinkAudioInputConnections`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * 64-Bit Integer `BMDDeckLinkDeviceBusyState`: `0` (`0x0`)
  * 64-Bit Integer `BMDDeckLinkVideoIOSupport`: `3` (`0x3`)

### Configuration

  * Flag (32-Bit Integer) `bmdDeckLinkConfigUse1080pNotPsF`: `1` (`0x1`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigFieldFlickerRemoval`: `1` (`0x1`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfig444SDIVideoOutput`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigSingleLinkVideoOutput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigLowLatencyVideoOutput`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigSMPTELevelAOutput`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputConnection`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputConversionMode`: `1852796517` (`0x6E6F6E65` - `none`) // `bmdNoVideoOutputConversion`
  * 64-Bit Integer `bmdDeckLinkConfigReferenceInputTimingOffset`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputIdleOperation`: `1651269987` (`0x626C6163` - `blac`)
  * 64-Bit Integer `bmdDeckLinkConfigDefaultVideoOutputMode`: `1885432864` (`0x70616C20` - `pal `) // `bmdModePAL`
  * 64-Bit Integer `bmdDeckLinkConfigDefaultVideoOutputModeFlags`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoInputConnection`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `bmdDeckLinkConfigVideoInputConversionMode`: `1852796517` (`0x6E6F6E65` - `none`) // `bmdNoVideoInputConversion`
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine1Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine2Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine3Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigCapturePassThroughMode`: `1885564014` (`0x70636C6E` - `pcln`)
  * 64-Bit Integer `bmdDeckLinkConfigAudioInputConnection`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * String `bmdDeckLinkConfigDeviceInformationLabel`: ``
  * String `bmdDeckLinkConfigDeviceInformationSerialNumber`: ``
  * String `bmdDeckLinkConfigDeviceInformationCompany`: ``
  * String `bmdDeckLinkConfigDeviceInformationPhone`: ``
  * String `bmdDeckLinkConfigDeviceInformationEmail`: ``
  * String `bmdDeckLinkConfigDeviceInformationDate`: ``

### Input Display Modes

 * NTSC:
  * Mode: `bmdModeNTSC` (`ntsc`)
  * Resolution: `720` x `486`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdLowerFieldFirst` (`lowr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * PAL:
  * Mode: `bmdModePAL` (`pal `)
  * Resolution: `720` x `576`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p23.98:
  * Mode: `bmdModeHD1080p2398` (`23ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p24:
  * Mode: `bmdModeHD1080p24` (`24ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p25:
  * Mode: `bmdModeHD1080p25` (`Hp25`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p29.97:
  * Mode: `bmdModeHD1080p2997` (`Hp29`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p30:
  * Mode: `bmdModeHD1080p30` (`Hp30`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i50:
  * Mode: `bmdModeHD1080i50` (`Hi50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i59.94:
  * Mode: `bmdModeHD1080i5994` (`Hi59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i60:
  * Mode: `bmdModeHD1080i6000` (`Hi60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p50:
  * Mode: `bmdModeHD1080p50` (`Hp50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p59.94:
  * Mode: `bmdModeHD1080p5994` (`Hp59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p60:
  * Mode: `bmdModeHD1080p6000` (`Hp60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 720p50:
  * Mode: `bmdModeHD720p50` (`hp50`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p59.94:
  * Mode: `bmdModeHD720p5994` (`hp59`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p60:
  * Mode: `bmdModeHD720p60` (`hp60`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)

TSV Formatted:

	Name	Display Mode	Display Mode FourCC	Resolution Width	Resolution Height	Frame Duration	Time Scale	Frame Rate, per second	Frame Length, millisecond	Field Dominance	Field Dominance FourCC	Display Mode Flags	Pixel Formats
	NTSC	bmdModeNTSC	ntsc	720	486	1001	30000	29.970	333666	bmdLowerFieldFirst	lowr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	PAL	bmdModePAL	pal 	720	576	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p23.98	bmdModeHD1080p2398	23ps	1920	1080	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p24	bmdModeHD1080p24	24ps	1920	1080	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p25	bmdModeHD1080p25	Hp25	1920	1080	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p29.97	bmdModeHD1080p2997	Hp29	1920	1080	1001	30000	29.970	333666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p30	bmdModeHD1080p30	Hp30	1920	1080	1000	30000	30.000	333333	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i50	bmdModeHD1080i50	Hi50	1920	1080	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i59.94	bmdModeHD1080i5994	Hi59	1920	1080	1001	30000	29.970	333666	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i60	bmdModeHD1080i6000	Hi60	1920	1080	1000	30000	30.000	333333	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p50	bmdModeHD1080p50	Hp50	1920	1080	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p59.94	bmdModeHD1080p5994	Hp59	1920	1080	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p60	bmdModeHD1080p6000	Hp60	1920	1080	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	720p50	bmdModeHD720p50	hp50	1280	720	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p59.94	bmdModeHD720p5994	hp59	1280	720	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p60	bmdModeHD720p60	hp60	1280	720	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B


### Output Display Modes

 * NTSC:
  * Mode: `bmdModeNTSC` (`ntsc`)
  * Resolution: `720` x `486`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdLowerFieldFirst` (`lowr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * PAL:
  * Mode: `bmdModePAL` (`pal `)
  * Resolution: `720` x `576`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p23.98:
  * Mode: `bmdModeHD1080p2398` (`23ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p24:
  * Mode: `bmdModeHD1080p24` (`24ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p25:
  * Mode: `bmdModeHD1080p25` (`Hp25`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p29.97:
  * Mode: `bmdModeHD1080p2997` (`Hp29`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p30:
  * Mode: `bmdModeHD1080p30` (`Hp30`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i50:
  * Mode: `bmdModeHD1080i50` (`Hi50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i59.94:
  * Mode: `bmdModeHD1080i5994` (`Hi59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i60:
  * Mode: `bmdModeHD1080i6000` (`Hi60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p50:
  * Mode: `bmdModeHD1080p50` (`Hp50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p59.94:
  * Mode: `bmdModeHD1080p5994` (`Hp59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p60:
  * Mode: `bmdModeHD1080p6000` (`Hp60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 720p50:
  * Mode: `bmdModeHD720p50` (`hp50`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p59.94:
  * Mode: `bmdModeHD720p5994` (`hp59`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p60:
  * Mode: `bmdModeHD720p60` (`hp60`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)

TSV Formatted:

	Name	Display Mode	Display Mode FourCC	Resolution Width	Resolution Height	Frame Duration	Time Scale	Frame Rate, per second	Frame Length, millisecond	Field Dominance	Field Dominance FourCC	Display Mode Flags	Pixel Formats
	NTSC	bmdModeNTSC	ntsc	720	486	1001	30000	29.970	333666	bmdLowerFieldFirst	lowr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	PAL	bmdModePAL	pal 	720	576	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p23.98	bmdModeHD1080p2398	23ps	1920	1080	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p24	bmdModeHD1080p24	24ps	1920	1080	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p25	bmdModeHD1080p25	Hp25	1920	1080	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p29.97	bmdModeHD1080p2997	Hp29	1920	1080	1001	30000	29.970	333666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p30	bmdModeHD1080p30	Hp30	1920	1080	1000	30000	30.000	333333	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i50	bmdModeHD1080i50	Hi50	1920	1080	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i59.94	bmdModeHD1080i5994	Hi59	1920	1080	1001	30000	29.970	333666	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i60	bmdModeHD1080i6000	Hi60	1920	1080	1000	30000	30.000	333333	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p50	bmdModeHD1080p50	Hp50	1920	1080	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p59.94	bmdModeHD1080p5994	Hp59	1920	1080	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p60	bmdModeHD1080p6000	Hp60	1920	1080	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	720p50	bmdModeHD720p50	hp50	1280	720	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p59.94	bmdModeHD720p5994	hp59	1280	720	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p60	bmdModeHD720p60	hp60	1280	720	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B



## DeckLink Quad (7) (DeckLink Quad 2)

 * Model Name: DeckLink Quad 2
 * Display Name: DeckLink Quad (7)
 * Interfaces:
  * `IDeckLink`
  * `IDeckLink_v8_0`
  * `IDeckLinkInput`
  * `IDeckLinkInput_v7_1`
  * `IDeckLinkInput_v7_3`
  * `IDeckLinkInput_v7_6`
  * `IDeckLinkInput_v9_2`
  * `IDeckLinkOutput`
  * `IDeckLinkOutput_v7_1`
  * `IDeckLinkOutput_v7_3`
  * `IDeckLinkOutput_v7_6`
  * `IDeckLinkOutput_v9_9`
  * `IDeckLinkConfiguration`
  * `IDeckLinkConfiguration_v7_6`
  * `IDeckLinkConfiguration_v10_2`
  * `IDeckLinkAttributes`
  * `IDeckLinkDeckControl`
  * `IDeckLinkDeckControl_v7_9`
  * `IDeckLinkDeckControl_v8_1`

### Attributes

  * Flag (32-Bit Integer) `BMDDeckLinkSupportsInternalKeying`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsExternalKeying`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsHDKeying`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsInputFormatDetection`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasReferenceInput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasSerialPort`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasVideoInputAntiAliasingFilter`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasBypass`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsDesktopDisplay`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsClockTimingAdjustment`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsFullDuplex`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsFullFrameReferenceInputTimingOffset`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsSMPTELevelAOutput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasAllAnalogOutputConnectionsActive`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsAutoSwitchingPPsFOnInput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsDualLinkSDI`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsIdleOutput`: `1` (`0x1`)
  * 64-Bit Integer `BMDDeckLinkMaximumAudioChannels`: `16` (`0x10`)
  * 64-Bit Integer `BMDDeckLinkNumberOfSubDevices`: `8` (`0x8`)
  * 64-Bit Integer `BMDDeckLinkSubDeviceIndex`: `6` (`0x6`)
  * 64-Bit Integer `BMDDeckLinkPersistentID`: `3973404294` (`0xECD55686`)
  * 64-Bit Integer `BMDDeckLinkTopologicalID`: `5246465` (`0x500E01`)
  * 64-Bit Integer `BMDDeckLinkVideoOutputConnections`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `BMDDeckLinkVideoInputConnections`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `BMDDeckLinkAudioOutputConnections`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * 64-Bit Integer `BMDDeckLinkAudioInputConnections`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * 64-Bit Integer `BMDDeckLinkDeviceBusyState`: `0` (`0x0`)
  * 64-Bit Integer `BMDDeckLinkVideoIOSupport`: `3` (`0x3`)

### Configuration

  * Flag (32-Bit Integer) `bmdDeckLinkConfigUse1080pNotPsF`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigFieldFlickerRemoval`: `1` (`0x1`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfig444SDIVideoOutput`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigSingleLinkVideoOutput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigLowLatencyVideoOutput`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigSMPTELevelAOutput`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputConnection`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputConversionMode`: `1852796517` (`0x6E6F6E65` - `none`) // `bmdNoVideoOutputConversion`
  * 64-Bit Integer `bmdDeckLinkConfigReferenceInputTimingOffset`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputIdleOperation`: `1651269987` (`0x626C6163` - `blac`)
  * 64-Bit Integer `bmdDeckLinkConfigDefaultVideoOutputMode`: `1885432864` (`0x70616C20` - `pal `) // `bmdModePAL`
  * 64-Bit Integer `bmdDeckLinkConfigDefaultVideoOutputModeFlags`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoInputConnection`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `bmdDeckLinkConfigVideoInputConversionMode`: `1852796517` (`0x6E6F6E65` - `none`) // `bmdNoVideoInputConversion`
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine1Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine2Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine3Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigCapturePassThroughMode`: `1885564014` (`0x70636C6E` - `pcln`)
  * 64-Bit Integer `bmdDeckLinkConfigAudioInputConnection`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * String `bmdDeckLinkConfigDeviceInformationLabel`: ``
  * String `bmdDeckLinkConfigDeviceInformationSerialNumber`: ``
  * String `bmdDeckLinkConfigDeviceInformationCompany`: ``
  * String `bmdDeckLinkConfigDeviceInformationPhone`: ``
  * String `bmdDeckLinkConfigDeviceInformationEmail`: ``
  * String `bmdDeckLinkConfigDeviceInformationDate`: ``

### Input Display Modes

 * NTSC:
  * Mode: `bmdModeNTSC` (`ntsc`)
  * Resolution: `720` x `486`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdLowerFieldFirst` (`lowr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * PAL:
  * Mode: `bmdModePAL` (`pal `)
  * Resolution: `720` x `576`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p23.98:
  * Mode: `bmdModeHD1080p2398` (`23ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p24:
  * Mode: `bmdModeHD1080p24` (`24ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p25:
  * Mode: `bmdModeHD1080p25` (`Hp25`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p29.97:
  * Mode: `bmdModeHD1080p2997` (`Hp29`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p30:
  * Mode: `bmdModeHD1080p30` (`Hp30`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i50:
  * Mode: `bmdModeHD1080i50` (`Hi50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i59.94:
  * Mode: `bmdModeHD1080i5994` (`Hi59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i60:
  * Mode: `bmdModeHD1080i6000` (`Hi60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p50:
  * Mode: `bmdModeHD1080p50` (`Hp50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p59.94:
  * Mode: `bmdModeHD1080p5994` (`Hp59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p60:
  * Mode: `bmdModeHD1080p6000` (`Hp60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 720p50:
  * Mode: `bmdModeHD720p50` (`hp50`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p59.94:
  * Mode: `bmdModeHD720p5994` (`hp59`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p60:
  * Mode: `bmdModeHD720p60` (`hp60`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)

TSV Formatted:

	Name	Display Mode	Display Mode FourCC	Resolution Width	Resolution Height	Frame Duration	Time Scale	Frame Rate, per second	Frame Length, millisecond	Field Dominance	Field Dominance FourCC	Display Mode Flags	Pixel Formats
	NTSC	bmdModeNTSC	ntsc	720	486	1001	30000	29.970	333666	bmdLowerFieldFirst	lowr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	PAL	bmdModePAL	pal 	720	576	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p23.98	bmdModeHD1080p2398	23ps	1920	1080	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p24	bmdModeHD1080p24	24ps	1920	1080	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p25	bmdModeHD1080p25	Hp25	1920	1080	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p29.97	bmdModeHD1080p2997	Hp29	1920	1080	1001	30000	29.970	333666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p30	bmdModeHD1080p30	Hp30	1920	1080	1000	30000	30.000	333333	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i50	bmdModeHD1080i50	Hi50	1920	1080	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i59.94	bmdModeHD1080i5994	Hi59	1920	1080	1001	30000	29.970	333666	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i60	bmdModeHD1080i6000	Hi60	1920	1080	1000	30000	30.000	333333	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p50	bmdModeHD1080p50	Hp50	1920	1080	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p59.94	bmdModeHD1080p5994	Hp59	1920	1080	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p60	bmdModeHD1080p6000	Hp60	1920	1080	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	720p50	bmdModeHD720p50	hp50	1280	720	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p59.94	bmdModeHD720p5994	hp59	1280	720	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p60	bmdModeHD720p60	hp60	1280	720	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B


### Output Display Modes

 * NTSC:
  * Mode: `bmdModeNTSC` (`ntsc`)
  * Resolution: `720` x `486`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdLowerFieldFirst` (`lowr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * PAL:
  * Mode: `bmdModePAL` (`pal `)
  * Resolution: `720` x `576`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p23.98:
  * Mode: `bmdModeHD1080p2398` (`23ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p24:
  * Mode: `bmdModeHD1080p24` (`24ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p25:
  * Mode: `bmdModeHD1080p25` (`Hp25`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p29.97:
  * Mode: `bmdModeHD1080p2997` (`Hp29`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p30:
  * Mode: `bmdModeHD1080p30` (`Hp30`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i50:
  * Mode: `bmdModeHD1080i50` (`Hi50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i59.94:
  * Mode: `bmdModeHD1080i5994` (`Hi59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i60:
  * Mode: `bmdModeHD1080i6000` (`Hi60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p50:
  * Mode: `bmdModeHD1080p50` (`Hp50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p59.94:
  * Mode: `bmdModeHD1080p5994` (`Hp59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p60:
  * Mode: `bmdModeHD1080p6000` (`Hp60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 720p50:
  * Mode: `bmdModeHD720p50` (`hp50`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p59.94:
  * Mode: `bmdModeHD720p5994` (`hp59`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p60:
  * Mode: `bmdModeHD720p60` (`hp60`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)

TSV Formatted:

	Name	Display Mode	Display Mode FourCC	Resolution Width	Resolution Height	Frame Duration	Time Scale	Frame Rate, per second	Frame Length, millisecond	Field Dominance	Field Dominance FourCC	Display Mode Flags	Pixel Formats
	NTSC	bmdModeNTSC	ntsc	720	486	1001	30000	29.970	333666	bmdLowerFieldFirst	lowr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	PAL	bmdModePAL	pal 	720	576	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p23.98	bmdModeHD1080p2398	23ps	1920	1080	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p24	bmdModeHD1080p24	24ps	1920	1080	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p25	bmdModeHD1080p25	Hp25	1920	1080	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p29.97	bmdModeHD1080p2997	Hp29	1920	1080	1001	30000	29.970	333666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p30	bmdModeHD1080p30	Hp30	1920	1080	1000	30000	30.000	333333	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i50	bmdModeHD1080i50	Hi50	1920	1080	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i59.94	bmdModeHD1080i5994	Hi59	1920	1080	1001	30000	29.970	333666	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i60	bmdModeHD1080i6000	Hi60	1920	1080	1000	30000	30.000	333333	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p50	bmdModeHD1080p50	Hp50	1920	1080	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p59.94	bmdModeHD1080p5994	Hp59	1920	1080	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p60	bmdModeHD1080p6000	Hp60	1920	1080	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	720p50	bmdModeHD720p50	hp50	1280	720	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p59.94	bmdModeHD720p5994	hp59	1280	720	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p60	bmdModeHD720p60	hp60	1280	720	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B



## DeckLink Quad (8) (DeckLink Quad 2)

 * Model Name: DeckLink Quad 2
 * Display Name: DeckLink Quad (8)
 * Interfaces:
  * `IDeckLink`
  * `IDeckLink_v8_0`
  * `IDeckLinkInput`
  * `IDeckLinkInput_v7_1`
  * `IDeckLinkInput_v7_3`
  * `IDeckLinkInput_v7_6`
  * `IDeckLinkInput_v9_2`
  * `IDeckLinkOutput`
  * `IDeckLinkOutput_v7_1`
  * `IDeckLinkOutput_v7_3`
  * `IDeckLinkOutput_v7_6`
  * `IDeckLinkOutput_v9_9`
  * `IDeckLinkConfiguration`
  * `IDeckLinkConfiguration_v7_6`
  * `IDeckLinkConfiguration_v10_2`
  * `IDeckLinkAttributes`
  * `IDeckLinkDeckControl`
  * `IDeckLinkDeckControl_v7_9`
  * `IDeckLinkDeckControl_v8_1`

### Attributes

  * Flag (32-Bit Integer) `BMDDeckLinkSupportsInternalKeying`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsExternalKeying`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsHDKeying`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsInputFormatDetection`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasReferenceInput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasSerialPort`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasVideoInputAntiAliasingFilter`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasBypass`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsDesktopDisplay`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsClockTimingAdjustment`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsFullDuplex`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsFullFrameReferenceInputTimingOffset`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsSMPTELevelAOutput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasAllAnalogOutputConnectionsActive`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsAutoSwitchingPPsFOnInput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsDualLinkSDI`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsIdleOutput`: `1` (`0x1`)
  * 64-Bit Integer `BMDDeckLinkMaximumAudioChannels`: `16` (`0x10`)
  * 64-Bit Integer `BMDDeckLinkNumberOfSubDevices`: `8` (`0x8`)
  * 64-Bit Integer `BMDDeckLinkSubDeviceIndex`: `7` (`0x7`)
  * 64-Bit Integer `BMDDeckLinkPersistentID`: `3973404295` (`0xECD55687`)
  * 64-Bit Integer `BMDDeckLinkTopologicalID`: `5246467` (`0x500E03`)
  * 64-Bit Integer `BMDDeckLinkVideoOutputConnections`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `BMDDeckLinkVideoInputConnections`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `BMDDeckLinkAudioOutputConnections`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * 64-Bit Integer `BMDDeckLinkAudioInputConnections`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * 64-Bit Integer `BMDDeckLinkDeviceBusyState`: `2` (`0x2`)
  * 64-Bit Integer `BMDDeckLinkVideoIOSupport`: `3` (`0x3`)

### Configuration

  * Flag (32-Bit Integer) `bmdDeckLinkConfigUse1080pNotPsF`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigFieldFlickerRemoval`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfig444SDIVideoOutput`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigSingleLinkVideoOutput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigLowLatencyVideoOutput`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigSMPTELevelAOutput`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputConnection`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputConversionMode`: `1852796517` (`0x6E6F6E65` - `none`) // `bmdNoVideoOutputConversion`
  * 64-Bit Integer `bmdDeckLinkConfigReferenceInputTimingOffset`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputIdleOperation`: `1651269987` (`0x626C6163` - `blac`)
  * 64-Bit Integer `bmdDeckLinkConfigDefaultVideoOutputMode`: `1214854457` (`0x48693539` - `Hi59`) // `bmdModeHD1080i5994`
  * 64-Bit Integer `bmdDeckLinkConfigDefaultVideoOutputModeFlags`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoInputConnection`: `1` (`0x1`) // `bmdVideoConnectionSDI`
  * 64-Bit Integer `bmdDeckLinkConfigVideoInputConversionMode`: `1852796517` (`0x6E6F6E65` - `none`) // `bmdNoVideoInputConversion`
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine1Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine2Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine3Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigCapturePassThroughMode`: `1885564014` (`0x70636C6E` - `pcln`)
  * 64-Bit Integer `bmdDeckLinkConfigAudioInputConnection`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * String `bmdDeckLinkConfigDeviceInformationLabel`: ``
  * String `bmdDeckLinkConfigDeviceInformationSerialNumber`: ``
  * String `bmdDeckLinkConfigDeviceInformationCompany`: ``
  * String `bmdDeckLinkConfigDeviceInformationPhone`: ``
  * String `bmdDeckLinkConfigDeviceInformationEmail`: ``
  * String `bmdDeckLinkConfigDeviceInformationDate`: ``

### Input Display Modes

 * NTSC:
  * Mode: `bmdModeNTSC` (`ntsc`)
  * Resolution: `720` x `486`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdLowerFieldFirst` (`lowr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * PAL:
  * Mode: `bmdModePAL` (`pal `)
  * Resolution: `720` x `576`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p23.98:
  * Mode: `bmdModeHD1080p2398` (`23ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p24:
  * Mode: `bmdModeHD1080p24` (`24ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p25:
  * Mode: `bmdModeHD1080p25` (`Hp25`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p29.97:
  * Mode: `bmdModeHD1080p2997` (`Hp29`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p30:
  * Mode: `bmdModeHD1080p30` (`Hp30`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i50:
  * Mode: `bmdModeHD1080i50` (`Hi50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i59.94:
  * Mode: `bmdModeHD1080i5994` (`Hi59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i60:
  * Mode: `bmdModeHD1080i6000` (`Hi60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p50:
  * Mode: `bmdModeHD1080p50` (`Hp50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p59.94:
  * Mode: `bmdModeHD1080p5994` (`Hp59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p60:
  * Mode: `bmdModeHD1080p6000` (`Hp60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 720p50:
  * Mode: `bmdModeHD720p50` (`hp50`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p59.94:
  * Mode: `bmdModeHD720p5994` (`hp59`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p60:
  * Mode: `bmdModeHD720p60` (`hp60`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)

TSV Formatted:

	Name	Display Mode	Display Mode FourCC	Resolution Width	Resolution Height	Frame Duration	Time Scale	Frame Rate, per second	Frame Length, millisecond	Field Dominance	Field Dominance FourCC	Display Mode Flags	Pixel Formats
	NTSC	bmdModeNTSC	ntsc	720	486	1001	30000	29.970	333666	bmdLowerFieldFirst	lowr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	PAL	bmdModePAL	pal 	720	576	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p23.98	bmdModeHD1080p2398	23ps	1920	1080	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p24	bmdModeHD1080p24	24ps	1920	1080	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p25	bmdModeHD1080p25	Hp25	1920	1080	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p29.97	bmdModeHD1080p2997	Hp29	1920	1080	1001	30000	29.970	333666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p30	bmdModeHD1080p30	Hp30	1920	1080	1000	30000	30.000	333333	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i50	bmdModeHD1080i50	Hi50	1920	1080	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i59.94	bmdModeHD1080i5994	Hi59	1920	1080	1001	30000	29.970	333666	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i60	bmdModeHD1080i6000	Hi60	1920	1080	1000	30000	30.000	333333	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p50	bmdModeHD1080p50	Hp50	1920	1080	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p59.94	bmdModeHD1080p5994	Hp59	1920	1080	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p60	bmdModeHD1080p6000	Hp60	1920	1080	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	720p50	bmdModeHD720p50	hp50	1280	720	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p59.94	bmdModeHD720p5994	hp59	1280	720	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p60	bmdModeHD720p60	hp60	1280	720	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B


### Output Display Modes

 * NTSC:
  * Mode: `bmdModeNTSC` (`ntsc`)
  * Resolution: `720` x `486`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdLowerFieldFirst` (`lowr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * PAL:
  * Mode: `bmdModePAL` (`pal `)
  * Resolution: `720` x `576`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p23.98:
  * Mode: `bmdModeHD1080p2398` (`23ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p24:
  * Mode: `bmdModeHD1080p24` (`24ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p25:
  * Mode: `bmdModeHD1080p25` (`Hp25`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p29.97:
  * Mode: `bmdModeHD1080p2997` (`Hp29`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p30:
  * Mode: `bmdModeHD1080p30` (`Hp30`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i50:
  * Mode: `bmdModeHD1080i50` (`Hi50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i59.94:
  * Mode: `bmdModeHD1080i5994` (`Hi59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080i60:
  * Mode: `bmdModeHD1080i6000` (`Hi60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`), `bmdFormat12BitRGBLE` (`R12L`), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 1080p50:
  * Mode: `bmdModeHD1080p50` (`Hp50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p59.94:
  * Mode: `bmdModeHD1080p5994` (`Hp59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p60:
  * Mode: `bmdModeHD1080p6000` (`Hp60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 720p50:
  * Mode: `bmdModeHD720p50` (`hp50`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p59.94:
  * Mode: `bmdModeHD720p5994` (`hp59`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)
 * 720p60:
  * Mode: `bmdModeHD720p60` (`hp60`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`), `bmdFormat12BitRGB` (`R12B`) (conversion), `bmdFormat12BitRGBLE` (`R12L`) (conversion), `bmdFormat10BitRGBXLE` (`R10l`), `bmdFormat10BitRGBX` (`R10b`), `bmdFormat10BitRGBXLE_FULL` (`R10L`), `bmdFormat10BitRGBX_FULL` (`R10B`)

TSV Formatted:

	Name	Display Mode	Display Mode FourCC	Resolution Width	Resolution Height	Frame Duration	Time Scale	Frame Rate, per second	Frame Length, millisecond	Field Dominance	Field Dominance FourCC	Display Mode Flags	Pixel Formats
	NTSC	bmdModeNTSC	ntsc	720	486	1001	30000	29.970	333666	bmdLowerFieldFirst	lowr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	PAL	bmdModePAL	pal 	720	576	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p23.98	bmdModeHD1080p2398	23ps	1920	1080	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p24	bmdModeHD1080p24	24ps	1920	1080	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p25	bmdModeHD1080p25	Hp25	1920	1080	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p29.97	bmdModeHD1080p2997	Hp29	1920	1080	1001	30000	29.970	333666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p30	bmdModeHD1080p30	Hp30	1920	1080	1000	30000	30.000	333333	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i50	bmdModeHD1080i50	Hi50	1920	1080	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i59.94	bmdModeHD1080i5994	Hi59	1920	1080	1001	30000	29.970	333666	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080i60	bmdModeHD1080i6000	Hi60	1920	1080	1000	30000	30.000	333333	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B, bmdFormat12BitRGBLE R12L, bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	1080p50	bmdModeHD1080p50	Hp50	1920	1080	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p59.94	bmdModeHD1080p5994	Hp59	1920	1080	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p60	bmdModeHD1080p6000	Hp60	1920	1080	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	720p50	bmdModeHD720p50	hp50	1280	720	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p59.94	bmdModeHD720p5994	hp59	1280	720	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B
	720p60	bmdModeHD720p60	hp60	1280	720	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210, bmdFormat12BitRGB R12B (conversion), bmdFormat12BitRGBLE R12L (conversion), bmdFormat10BitRGBXLE R10l, bmdFormat10BitRGBX R10b, bmdFormat10BitRGBXLE_FULL R10L, bmdFormat10BitRGBX_FULL R10B



