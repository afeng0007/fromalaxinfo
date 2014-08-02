# System

 * Version: `6.1` Build `7601`; Windows 7; Service Pack 1; Service Pack `1.0`
 * Computer Name: `DEMO-PC`
 * User Name: `User` (Administrator)
 * Local Time: `1/7/2014 12:52:59 PM`
 * Architecture: x86
 * Processors: `8`, Active Mask `0xFF`
 * Page Size: `0x1000`
 * Application Address Space: `0x00010000`..`0xFFFEFFFF`
 * Physical Memory: `8,136` MB
 * Committed Memory Limit: `16,270` MB

# DeckLink API

## API Information

  * 64-Bit Integer `BMDDeckLinkAPIVersion`: `151519232` (`0x9080000`)

## DeckLink 4K Extreme (DeckLink 4K Extreme)

 * Model Name: DeckLink 4K Extreme
 * Display Name: DeckLink 4K Extreme
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
  * `IDeckLinkConfiguration`
  * `IDeckLinkAttributes`
  * `IDeckLinkKeyer`
  * `IDeckLinkDeckControl`
 * Attributes:
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsInternalKeying`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsExternalKeying`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsHDKeying`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsInputFormatDetection`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasReferenceInput`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasSerialPort`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasAnalogVideoOutputGain`: `1` (`0x1`)
  * Flag (32-Bit Integer) `BMDDeckLinkCanOnlyAdjustOverallVideoOutputGain`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasVideoInputAntiAliasingFilter`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkHasBypass`: `0` (`0x0`)
  * Flag (32-Bit Integer) `BMDDeckLinkSupportsDesktopDisplay`: `0` (`0x0`)
  * 64-Bit Integer `BMDDeckLinkMaximumAudioChannels`: `16` (`0x10`)
  * 64-Bit Integer `BMDDeckLinkNumberOfSubDevices`: `1` (`0x1`)
  * 64-Bit Integer `BMDDeckLinkSubDeviceIndex`: `0` (`0x0`)
  * 64-Bit Integer `BMDDeckLinkVideoOutputConnections`: `59` (`0x3B`) - `bmdVideoConnectionSDI | bmdVideoConnectionHDMI | bmdVideoConnectionComponent | bmdVideoConnectionComposite | bmdVideoConnectionSVideo`
  * 64-Bit Integer `BMDDeckLinkVideoInputConnections`: `59` (`0x3B`) - `bmdVideoConnectionSDI | bmdVideoConnectionHDMI | bmdVideoConnectionComponent | bmdVideoConnectionComposite | bmdVideoConnectionSVideo`
  * 64-Bit Integer `BMDDeckLinkDeviceBusyState`: `0` (`0x0`)
  * Float `BMDDeckLinkVideoInputGainMinimum`: `-1.800`
  * Float `BMDDeckLinkVideoInputGainMaximum`: `1.800`
  * String `BMDDeckLinkSerialPortDeviceName`: `COM3`
 * Configuration:
  * Flag (32-Bit Integer) `bmdDeckLinkConfigSwapSerialRxTx`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigUse1080pNotPsF`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigHDMI3DPackingFormat`: `1935831912` (`0x73627368` - `sbsh`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigAnalogAudioConsumerLevels`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigFieldFlickerRemoval`: `1` (`0x1`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigHD1080p24ToHD1080i5994Conversion`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfig444SDIVideoOutput`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfig3GBpsVideoOutput`: `0` (`0x0`)
  * Flag (32-Bit Integer) `bmdDeckLinkConfigLowLatencyVideoOutput`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputConnection`: `11` (`0xB`) - `bmdVideoConnectionSDI | bmdVideoConnectionHDMI | bmdVideoConnectionComponent`
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputConversionMode`: `1852796517` (`0x6E6F6E65` - `none`) - `bmdNoVideoOutputConversion`
  * 64-Bit Integer `bmdDeckLinkConfigAnalogVideoOutputFlags`: `1` (`0x1`) - `bmdAnalogVideoFlagCompositeSetup75`
  * 64-Bit Integer `bmdDeckLinkConfigReferenceInputTimingOffset`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVideoOutputIdleOperation`: `1651269987` (`0x626C6163` - `blac`)
  * 64-Bit Integer `bmdDeckLinkConfigDefaultVideoOutputMode`: `1853125475` (`0x6E747363` - `ntsc`)
  * 64-Bit Integer `bmdDeckLinkConfigDefaultVideoOutputModeFlags`: `0` (`0x0`)
  * Float `bmdDeckLinkConfigVideoOutputComponentLumaGain`: `0.000`
  * Float `bmdDeckLinkConfigVideoOutputComponentChromaBlueGain`: `0.000`
  * Float `bmdDeckLinkConfigVideoOutputComponentChromaRedGain`: `0.000`
  * Float `bmdDeckLinkConfigVideoOutputCompositeLumaGain`: `0.000`
  * Float `bmdDeckLinkConfigVideoOutputCompositeChromaGain`: `0.000`
  * Float `bmdDeckLinkConfigVideoOutputSVideoLumaGain`: `0.000`
  * Float `bmdDeckLinkConfigVideoOutputSVideoChromaGain`: `0.000`
  * 64-Bit Integer `bmdDeckLinkConfigVideoInputConnection`: `2` (`0x2`) - `bmdVideoConnectionHDMI`
  * 64-Bit Integer `bmdDeckLinkConfigAnalogVideoInputFlags`: `1` (`0x1`) - `bmdAnalogVideoFlagCompositeSetup75`
  * 64-Bit Integer `bmdDeckLinkConfigVideoInputConversionMode`: `1852796517` (`0x6E6F6E65` - `none`) - `bmdNoVideoInputConversion`
  * 64-Bit Integer `bmdDeckLinkConfig32PulldownSequenceInitialTimecodeFrame`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine1Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine2Mapping`: `0` (`0x0`)
  * 64-Bit Integer `bmdDeckLinkConfigVANCSourceLine3Mapping`: `0` (`0x0`)
  * Float `bmdDeckLinkConfigVideoInputComponentLumaGain`: `0.000`
  * Float `bmdDeckLinkConfigVideoInputComponentChromaBlueGain`: `0.000`
  * Float `bmdDeckLinkConfigVideoInputComponentChromaRedGain`: `0.000`
  * Float `bmdDeckLinkConfigVideoInputCompositeLumaGain`: `0.000`
  * Float `bmdDeckLinkConfigVideoInputCompositeChromaGain`: `0.000`
  * Float `bmdDeckLinkConfigVideoInputSVideoLumaGain`: `0.000`
  * Float `bmdDeckLinkConfigVideoInputSVideoChromaGain`: `0.000`
  * 64-Bit Integer `bmdDeckLinkConfigAudioInputConnection`: `1701667428` (`0x656D6264` - `embd`) - `bmdAudioConnectionEmbedded`
  * Float `bmdDeckLinkConfigAnalogAudioInputScaleChannel1`: `0.000`
  * Float `bmdDeckLinkConfigAnalogAudioInputScaleChannel2`: `0.000`
  * Float `bmdDeckLinkConfigDigitalAudioInputScale`: `0.000`
  * Float `bmdDeckLinkConfigAnalogAudioOutputScaleChannel1`: `0.000`
  * Float `bmdDeckLinkConfigAnalogAudioOutputScaleChannel2`: `0.000`
  * Float `bmdDeckLinkConfigDigitalAudioOutputScale`: `0.000`

### Input Display Modes
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
 * HD 1080p 23.98:
  * Mode: `bmdModeHD1080p2398` (`23ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat10BitRGB` (`r210`)
 * HD 1080p 24:
  * Mode: `bmdModeHD1080p24` (`24ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat10BitRGB` (`r210`)
 * HD 1080p 25:
  * Mode: `bmdModeHD1080p25` (`Hp25`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat10BitRGB` (`r210`)
 * HD 1080p 29.97:
  * Mode: `bmdModeHD1080p2997` (`Hp29`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat10BitRGB` (`r210`)
 * HD 1080p 30:
  * Mode: `bmdModeHD1080p30` (`Hp30`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat10BitRGB` (`r210`)
 * HD 1080i 50:
  * Mode: `bmdModeHD1080i50` (`Hi50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat10BitRGB` (`r210`)
 * HD 1080i 59.94:
  * Mode: `bmdModeHD1080i5994` (`Hi59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat10BitRGB` (`r210`)
 * HD 1080i 60:
  * Mode: `bmdModeHD1080i6000` (`Hi60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat10BitRGB` (`r210`)
 * HD 1080p 50:
  * Mode: `bmdModeHD1080p50` (`Hp50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * HD 1080p 59.94:
  * Mode: `bmdModeHD1080p5994` (`Hp59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * HD 1080p 60:
  * Mode: `bmdModeHD1080p6000` (`Hp60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * HD 720p 50:
  * Mode: `bmdModeHD720p50` (`hp50`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat10BitRGB` (`r210`)
 * HD 720p 59.94:
  * Mode: `bmdModeHD720p5994` (`hp59`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat10BitRGB` (`r210`)
 * HD 720p 60:
  * Mode: `bmdModeHD720p60` (`hp60`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat10BitRGB` (`r210`)
 * 2K 23.98:
  * Mode: `bmdMode2k2398` (`2k23`)
  * Resolution: `2048` x `1556`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat10BitRGB` (`r210`)
 * 2K 24:
  * Mode: `bmdMode2k24` (`2k24`)
  * Resolution: `2048` x `1556`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat10BitRGB` (`r210`)
 * 2K 25:
  * Mode: `bmdMode2k25` (`2k25`)
  * Resolution: `2048` x `1556`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat10BitRGB` (`r210`)
 * 4K Ultra HD 23.98:
  * Mode: `` (`4k23`)
  * Resolution: `3840` x `2160`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 4K Ultra HD 24:
  * Mode: `` (`4k24`)
  * Resolution: `3840` x `2160`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 4K Ultra HD 25:
  * Mode: `` (`4k25`)
  * Resolution: `3840` x `2160`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 4K Ultra HD 29.97:
  * Mode: `` (`4k29`)
  * Resolution: `3840` x `2160`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * 4K Ultra HD 30:
  * Mode: `` (`4k30`)
  * Resolution: `3840` x `2160`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)

TSV Formatted:

	Name	Display Mode	Display Mode FourCC	Resolution Width	Resolution Height	Frame Duration	Time Scale	Frame Rate, per second	Frame Length, millisecond	Field Dominance	Field Dominance FourCC	Display Mode Flags	Pixel Formats
	NTSC	bmdModeNTSC	ntsc	720	486	1001	30000	29.970	333666	bmdLowerFieldFirst	lowr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	NTSC 23.98	bmdModeNTSC2398	nt23	720	486	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	PAL	bmdModePAL	pal 	720	576	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	HD 1080p 23.98	bmdModeHD1080p2398	23ps	1920	1080	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat10BitRGB r210
	HD 1080p 24	bmdModeHD1080p24	24ps	1920	1080	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat10BitRGB r210
	HD 1080p 25	bmdModeHD1080p25	Hp25	1920	1080	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat10BitRGB r210
	HD 1080p 29.97	bmdModeHD1080p2997	Hp29	1920	1080	1001	30000	29.970	333666	bmdProgressiveFrame	prog	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat10BitRGB r210
	HD 1080p 30	bmdModeHD1080p30	Hp30	1920	1080	1000	30000	30.000	333333	bmdProgressiveFrame	prog	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat10BitRGB r210
	HD 1080i 50	bmdModeHD1080i50	Hi50	1920	1080	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat10BitRGB r210
	HD 1080i 59.94	bmdModeHD1080i5994	Hi59	1920	1080	1001	30000	29.970	333666	bmdUpperFieldFirst	uppr	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat10BitRGB r210
	HD 1080i 60	bmdModeHD1080i6000	Hi60	1920	1080	1000	30000	30.000	333333	bmdUpperFieldFirst	uppr	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat10BitRGB r210
	HD 1080p 50	bmdModeHD1080p50	Hp50	1920	1080	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	HD 1080p 59.94	bmdModeHD1080p5994	Hp59	1920	1080	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	HD 1080p 60	bmdModeHD1080p6000	Hp60	1920	1080	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	HD 720p 50	bmdModeHD720p50	hp50	1280	720	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat10BitRGB r210
	HD 720p 59.94	bmdModeHD720p5994	hp59	1280	720	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat10BitRGB r210
	HD 720p 60	bmdModeHD720p60	hp60	1280	720	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat10BitRGB r210
	2K 23.98	bmdMode2k2398	2k23	2048	1556	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat10BitRGB r210
	2K 24	bmdMode2k24	2k24	2048	1556	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat10BitRGB r210
	2K 25	bmdMode2k25	2k25	2048	1556	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat10BitRGB r210
	4K Ultra HD 23.98		4k23	3840	2160	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	4K Ultra HD 24		4k24	3840	2160	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	4K Ultra HD 25		4k25	3840	2160	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	4K Ultra HD 29.97		4k29	3840	2160	1001	30000	29.970	333666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	4K Ultra HD 30		4k30	3840	2160	1000	30000	30.000	333333	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210


### Output Display Modes
 * NTSC:
  * Mode: `bmdModeNTSC` (`ntsc`)
  * Resolution: `720` x `486`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdLowerFieldFirst` (`lowr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * NTSC 23.98:
  * Mode: `bmdModeNTSC2398` (`nt23`)
  * Resolution: `720` x `486`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * PAL:
  * Mode: `bmdModePAL` (`pal `)
  * Resolution: `720` x `576`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeColorspaceRec601`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * HD 1080p 23.98:
  * Mode: `bmdModeHD1080p2398` (`23ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * HD 1080p 24:
  * Mode: `bmdModeHD1080p24` (`24ps`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * HD 1080p 25:
  * Mode: `bmdModeHD1080p25` (`Hp25`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * HD 1080p 29.97:
  * Mode: `bmdModeHD1080p2997` (`Hp29`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * HD 1080p 30:
  * Mode: `bmdModeHD1080p30` (`Hp30`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * HD 1080i 50:
  * Mode: `bmdModeHD1080i50` (`Hi50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * HD 1080i 59.94:
  * Mode: `bmdModeHD1080i5994` (`Hi59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * HD 1080i 60:
  * Mode: `bmdModeHD1080i6000` (`Hi60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdUpperFieldFirst` (`uppr`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * HD 1080p 50:
  * Mode: `bmdModeHD1080p50` (`Hp50`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * HD 1080p 59.94:
  * Mode: `bmdModeHD1080p5994` (`Hp59`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * HD 1080p 60:
  * Mode: `bmdModeHD1080p6000` (`Hp60`)
  * Resolution: `1920` x `1080`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`)
 * HD 720p 50:
  * Mode: `bmdModeHD720p50` (`hp50`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `50000` (`50.000` fps, `20 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * HD 720p 59.94:
  * Mode: `bmdModeHD720p5994` (`hp59`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1001` / `60000` (`59.940` fps, `16 6833` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * HD 720p 60:
  * Mode: `bmdModeHD720p60` (`hp60`)
  * Resolution: `1280` x `720`
  * Frame Duration: `1000` / `60000` (`60.000` fps, `16 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * 2K 23.98:
  * Mode: `bmdMode2k2398` (`2k23`)
  * Resolution: `2048` x `1556`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * 2K 24:
  * Mode: `bmdMode2k24` (`2k24`)
  * Resolution: `2048` x `1556`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * 2K 25:
  * Mode: `bmdMode2k25` (`2k25`)
  * Resolution: `2048` x `1556`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * 2K DCI 23.98:
  * Mode: `` (`2d23`)
  * Resolution: `2048` x `1080`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * 2K DCI 24:
  * Mode: `` (`2d24`)
  * Resolution: `2048` x `1080`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * 2K DCI 25:
  * Mode: `` (`2d25`)
  * Resolution: `2048` x `1080`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * 4K Ultra HD 23.98:
  * Mode: `` (`4k23`)
  * Resolution: `3840` x `2160`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * 4K Ultra HD 24:
  * Mode: `` (`4k24`)
  * Resolution: `3840` x `2160`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * 4K Ultra HD 25:
  * Mode: `` (`4k25`)
  * Resolution: `3840` x `2160`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * 4K Ultra HD 29.97:
  * Mode: `` (`4k29`)
  * Resolution: `3840` x `2160`
  * Frame Duration: `1001` / `30000` (`29.970` fps, `33 3666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * 4K Ultra HD 30:
  * Mode: `` (`4k30`)
  * Resolution: `3840` x `2160`
  * Frame Duration: `1000` / `30000` (`30.000` fps, `33 3333` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * 4K DCI 23.98:
  * Mode: `` (`4d23`)
  * Resolution: `4096` x `2160`
  * Frame Duration: `1001` / `24000` (`23.976` fps, `41 7083` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * 4K DCI 24:
  * Mode: `` (`4d24`)
  * Resolution: `4096` x `2160`
  * Frame Duration: `1000` / `24000` (`24.000` fps, `41 6666` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)
 * 4K DCI 25:
  * Mode: `` (`4d25`)
  * Resolution: `4096` x `2160`
  * Frame Duration: `1000` / `25000` (`25.000` fps, `40 0000` per frame)
  * Field Dominance: `bmdProgressiveFrame` (`prog`)
  * Flags: `bmdDisplayModeColorspaceRec709`
  * Pixel Formats: `bmdFormat8BitYUV` (`2vuy`), `bmdFormat10BitYUV` (`v210`), `bmdFormat8BitARGB`, `bmdFormat8BitBGRA` (`BGRA`), `bmdFormat10BitRGB` (`r210`)

TSV Formatted:

	Name	Display Mode	Display Mode FourCC	Resolution Width	Resolution Height	Frame Duration	Time Scale	Frame Rate, per second	Frame Length, millisecond	Field Dominance	Field Dominance FourCC	Display Mode Flags	Pixel Formats
	NTSC	bmdModeNTSC	ntsc	720	486	1001	30000	29.970	333666	bmdLowerFieldFirst	lowr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	NTSC 23.98	bmdModeNTSC2398	nt23	720	486	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	PAL	bmdModePAL	pal 	720	576	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeColorspaceRec601	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	HD 1080p 23.98	bmdModeHD1080p2398	23ps	1920	1080	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	HD 1080p 24	bmdModeHD1080p24	24ps	1920	1080	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	HD 1080p 25	bmdModeHD1080p25	Hp25	1920	1080	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	HD 1080p 29.97	bmdModeHD1080p2997	Hp29	1920	1080	1001	30000	29.970	333666	bmdProgressiveFrame	prog	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	HD 1080p 30	bmdModeHD1080p30	Hp30	1920	1080	1000	30000	30.000	333333	bmdProgressiveFrame	prog	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	HD 1080i 50	bmdModeHD1080i50	Hi50	1920	1080	1000	25000	25.000	400000	bmdUpperFieldFirst	uppr	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	HD 1080i 59.94	bmdModeHD1080i5994	Hi59	1920	1080	1001	30000	29.970	333666	bmdUpperFieldFirst	uppr	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	HD 1080i 60	bmdModeHD1080i6000	Hi60	1920	1080	1000	30000	30.000	333333	bmdUpperFieldFirst	uppr	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	HD 1080p 50	bmdModeHD1080p50	Hp50	1920	1080	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	HD 1080p 59.94	bmdModeHD1080p5994	Hp59	1920	1080	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	HD 1080p 60	bmdModeHD1080p6000	Hp60	1920	1080	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210
	HD 720p 50	bmdModeHD720p50	hp50	1280	720	1000	50000	50.000	200000	bmdProgressiveFrame	prog	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	HD 720p 59.94	bmdModeHD720p5994	hp59	1280	720	1001	60000	59.940	166833	bmdProgressiveFrame	prog	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	HD 720p 60	bmdModeHD720p60	hp60	1280	720	1000	60000	60.000	166666	bmdProgressiveFrame	prog	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	2K 23.98	bmdMode2k2398	2k23	2048	1556	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	2K 24	bmdMode2k24	2k24	2048	1556	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	2K 25	bmdMode2k25	2k25	2048	1556	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	2K DCI 23.98		2d23	2048	1080	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	2K DCI 24		2d24	2048	1080	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	2K DCI 25		2d25	2048	1080	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeSupports3D | bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	4K Ultra HD 23.98		4k23	3840	2160	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	4K Ultra HD 24		4k24	3840	2160	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	4K Ultra HD 25		4k25	3840	2160	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	4K Ultra HD 29.97		4k29	3840	2160	1001	30000	29.970	333666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	4K Ultra HD 30		4k30	3840	2160	1000	30000	30.000	333333	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	4K DCI 23.98		4d23	4096	2160	1001	24000	23.976	417083	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	4K DCI 24		4d24	4096	2160	1000	24000	24.000	416666	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210
	4K DCI 25		4d25	4096	2160	1000	25000	25.000	400000	bmdProgressiveFrame	prog	bmdDisplayModeColorspaceRec709	bmdFormat8BitYUV 2vuy, bmdFormat10BitYUV v210, bmdFormat8BitARGB , bmdFormat8BitBGRA BGRA, bmdFormat10BitRGB r210


