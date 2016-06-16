

# System

 * System Version: `6.2` Build `9200`; Windows 8; Suite Mask `0x100`; Product Type `0x1`
 * Computer Name: `DESKTOP-KB64HOD`
 * User Name: `hhool` 
 * Local Time: `2016/6/16 20:23:54`
 * Architecture: AMD/Intel x64 (x64 Application)
 * Processors: `8`, Active Mask `0xFF`
 * Page Size: `0x1000`
 * Application Address Space: `0x0000000000010000`..`0x00007FFFFFFEFFFF`
 * Physical Memory: `16,260` MB
 * Committed Memory Limit: `18,692` MB

# DeckLink API

## API Information

  * 64-Bit Integer `BMDDeckLinkAPIVersion`: `168166400` (`0xA060400`) // 10.6.4
  * String `BMDDeckLinkAPIRCTag`: `a21`
  * Flag (32-Bit Integer) `BMDDeckLinkAPIEngineeringMode`: `1` (`0x1`)

## DeckLink Mini Monitor (DeckLink Mini Monitor)

 * Model Name: DeckLink Mini Monitor
 * Display Name: DeckLink Mini Monitor
 * Interfaces:
  * `IDeckLink`
  * `IDeckLink_v8_0`
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
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsHDKeying`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsInputFormatDetection`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasReferenceInput`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasSerialPort`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasVideoInputAntiAliasingFilter`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasBypass`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsDesktopDisplay`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsClockTimingAdjustment`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsFullDuplex`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsFullFrameReferenceInputTimingOffset`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsSMPTELevelAOutput`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasAllAnalogOutputConnectionsActive`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsAutoSwitchingPPsFOnInput`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsDualLinkSDI`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsIdleOutput`: `1` (`0x1`)
  * 64-Bit Integer `BMDDeckLinkMaximumAudioChannels`: `8` (`0x8`)
  * 64-Bit Integer `BMDDeckLinkNumberOfSubDevices`: `1` (`0x1`)
  * 64-Bit Integer `BMDDeckLinkSubDeviceIndex`: `0` (`0x0`)
  * 64-Bit Integer `BMDDeckLinkTopologicalID`: `4326656` (`0x420500`)
  * 64-Bit Integer `BMDDeckLinkVideoOutputConnections`: `3` (`0x3`) // `bmdVideoConnectionSDI | bmdVideoConnectionHDMI`
  * 64-Bit Integer `BMDDeckLinkVideoInputConnections`: `0` (`0x0`) // `0`
  * 64-Bit Integer `BMDDeckLinkAudioOutputConnections`: `1` (`0x1`) // `bmdAudioConnectionEmbedded`
  * 64-Bit Integer `BMDDeckLinkAudioInputConnections`: `0` (`0x0`) // `0`
  * 64-Bit Integer `BMDDeckLinkDeviceBusyState`: `0` (`0x0`)
  * 64-Bit Integer `BMDDeckLinkVideoIOSupport`: `2` (`0x2`)

### Configuration

  * Flag (32-Bit Integer) `bmdDeckLinkConfigUse1080pNotPsF`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigFieldFlickerRemoval`: `1` (`0x1`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigHD1080p24ToHD1080i5994Conversion`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigSingleLinkVideoOutput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigLowLatencyVideoOutput`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputConnection`: `3` (`0x3`) // `bmdVideoConnectionSDI | bmdVideoConnectionHDMI`
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputConversionMode`: `926036067` (`0x37323063` - `720c`) // `bmdVideoOutputHD720toHD1080Conversion`
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputIdleOperation`: `1651269987` (`0x626C6163` - `blac`)
  * 64-Bit Integer `bmdDeckLinkConfigDefaultVideoOutputMode`: `1853125475` (`0x6E747363` - `ntsc`) // `bmdModeNTSC`
  * 64-Bit Integer `bmdDeckLinkConfigDefaultVideoOutputModeFlags`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoInputConversionMode`: `1852796517` (`0x6E6F6E65` - `none`) // `bmdNoVideoInputConversion`
  * 64-Bit Integer `bmdDeckLinkConfig32PulldownSequenceInitialTimecodeFrame`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine1Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine2Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine3Mapping`: `0` (`0x0`)

### Output Display Modes

 * NTSC:
  * Mode: `bmdModeNTSC` (`ntsc`)
  * Resolution: `720` x `486`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdLowerFieldFirst` (`lowr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * NTSC 23.98:
  * Mode: `bmdModeNTSC2398` (`nt23`)
  * Resolution: `720` x `486`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * PAL:
  * Mode: `bmdModePAL` (`pal `)
  * Resolution: `720` x `576`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * NTSC Progressive:
  * Mode: `bmdModeNTSCp` (`ntsp`)
  * Resolution: `720` x `486`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * PAL Progressive:
  * Mode: `bmdModePALp` (`palp`)
  * Resolution: `720` x `576`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p23.98:
  * Mode: `bmdModeHD1080p2398` (`23ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p24:
  * Mode: `bmdModeHD1080p24` (`24ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p25:
  * Mode: `bmdModeHD1080p25` (`Hp25`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p29.97:
  * Mode: `bmdModeHD1080p2997` (`Hp29`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080p30:
  * Mode: `bmdModeHD1080p30` (`Hp30`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080i50:
  * Mode: `bmdModeHD1080i50` (`Hi50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080i59.94:
  * Mode: `bmdModeHD1080i5994` (`Hi59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 1080i60:
  * Mode: `bmdModeHD1080i6000` (`Hi60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 720p50:
  * Mode: `bmdModeHD720p50` (`hp50`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 720p59.94:
  * Mode: `bmdModeHD720p5994` (`hp59`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 720p60:
  * Mode: `bmdModeHD720p60` (`hp60`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)

TSV Formatted:

	Name	Display Mode	Display Mode FourCC	Resolution Width	Resolution Height	Frame Duration	Time Scale	Frame Rate, per second	Frame Length, millisecond	Field Dominance	Field Dominance FourCC	Display Mode Flags	Pixel Formats
	NTSC	bmdModeNTSC	ntsc	720	486	1001	30000	29.970	333666	bmdLowerFieldFirst	lowr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	NTSC 23.98	bmdModeNTSC2398	nt23	720	486	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	PAL	bmdModePAL	pal 	720	576	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	NTSC Progressive	bmdModeNTSCp	ntsp	720	486	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	PAL Progressive	bmdModePALp	palp	720	576	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p23.98	bmdModeHD1080p2398	23ps	1920	1080	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p24	bmdModeHD1080p24	24ps	1920	1080	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p25	bmdModeHD1080p25	Hp25	1920	1080	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p29.97	bmdModeHD1080p2997	Hp29	1920	1080	1001	30000	29.970	333666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080p30	bmdModeHD1080p30	Hp30	1920	1080	1000	30000	30.000	333333	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080i50	bmdModeHD1080i50	Hi50	1920	1080	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080i59.94	bmdModeHD1080i5994	Hi59	1920	1080	1001	30000	29.970	333666	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	1080i60	bmdModeHD1080i6000	Hi60	1920	1080	1000	30000	30.000	333333	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	720p50	bmdModeHD720p50	hp50	1280	720	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	720p59.94	bmdModeHD720p5994	hp59	1280	720	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	720p60	bmdModeHD720p60	hp60	1280	720	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210



