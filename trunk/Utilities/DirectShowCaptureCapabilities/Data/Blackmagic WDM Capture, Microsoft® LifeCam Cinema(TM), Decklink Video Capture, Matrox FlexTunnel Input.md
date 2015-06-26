# System

 * Version: Windows 7 Service Pack 1
 * Computer Name: `QA-1`
 * User Name: `User` (Administrator)
 * Local Time: `6/26/2015 11:15:23 AM`
 * Architecture: x86
 * Processors: `8`, Active Mask `0xFF`
 * Page Size: `0x1000`
 * Application Address Space: `0x00010000`..`0xFFFEFFFF`
 * CPU: `GenuineIntel`, 0x1 EDX `0xBFEBFBFF` (MMX, SSE, SSE2), 0x1 ECX `0x7FFAFBBF` (SSE3, SSSE3, SSE41, SSE42, AVX), 0x7 EBX `0x00002FBB` (AVX2), Brand `Intel(R) Core(TM) i7-4790K CPU @ 4.00GHz`
 * Physical Memory: `8,134` MB
 * Committed Memory Limit: `16,267` MB
 * Application Version: `1.0.0.447`

# Video

## Device: Blackmagic WDM Capture

 * Moniker Display Name: `@device:pnp:\\?\decklink#avstream#5&e6363e1&0&0000#{65e8773d-8f56-11d0-a3b9-00a0c9223196}\decklinkcapture1`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IAMDeviceRemoval`
  * `IAMDroppedFrames`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{C4D3CE08-505A-4747-BE12-95CE01D39CC0}` - DeckLink WDM Video Capture Properties
  * `{E7422C96-9108-4894-921C-9BDCF20A9255}` - DeckLink WDM Audio Capture Properties

### Pin: Video Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `26`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 C0 AD 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 8E 54 00 0A 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E6 01 00 00 01 00 10 00 55 59 56 59 C0 AD 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `699,840`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `167793806`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `486`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `699,840`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E0 01 00 00 D0 02 00 00 E6 01 00 00 08 00 00 00 06 00 00 00 08 00 00 00 01 00 00 00 D0 02 00 00 E0 01 00 00 D0 02 00 00 E6 01 00 00 08 00 00 00 06 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 62 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 A5 B8 E0 09 8E 54 00 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `486`
  * `.MinCroppingSize`: `720` x `480`
  * `.MaxCroppingSize`: `720` x `486`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `720` x `480`
  * `.MaxOutputSize`: `720` x `486`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `6`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3666`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `165,722,277`
  * `.MaxBitsPerSecond`: `167,793,806`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 3D 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 13 C6 55 0D 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E6 01 00 00 01 00 14 00 76 32 31 30 00 3D 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `933,120`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `223725075`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `486`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `933,120`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E0 01 00 00 D0 02 00 00 E6 01 00 00 08 00 00 00 06 00 00 00 08 00 00 00 01 00 00 00 D0 02 00 00 E0 01 00 00 D0 02 00 00 E6 01 00 00 08 00 00 00 06 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 62 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 DC A0 2B 0D 13 C6 55 0D`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `486`
  * `.MinCroppingSize`: `720` x `480`
  * `.MaxCroppingSize`: `720` x `486`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `720` x `480`
  * `.MaxOutputSize`: `720` x `486`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `6`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3666`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `220,963,036`
  * `.MaxBitsPerSecond`: `223,725,075`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A8 0C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 E3 09 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 10 00 55 59 56 59 00 A8 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `829,440`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `165888000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `829,440`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 40 E3 09 00 40 E3 09`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `576`
  * `.MinCroppingSize`: `720` x `576`
  * `.MaxCroppingSize`: `720` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `720` x `576`
  * `.MaxOutputSize`: `720` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `165,888,000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 E0 10 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2F 0D 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 14 00 76 32 31 30 00 E0 10 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,105,920`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `1,105,920`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `576`
  * `.MinCroppingSize`: `720` x `576`
  * `.MaxCroppingSize`: `720` x `576`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `720` x `576`
  * `.MaxOutputSize`: `720` x `576`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `221,184,000`
  * `.MaxBitsPerSecond`: `221,184,000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 F2 2B 00 00 00 00 40 0D 03 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 48 44 59 43 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,843,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `737280000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `20 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `1,843,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 0D 03 00 00 00 00 00 40 0D 03 00 00 00 00 00 00 00 F2 2B 00 00 F2 2B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `20 0000`
  * `.MaxFrameInterval`: `20 0000`
  * `.MinBitsPerSecond`: `737,280,000`
  * `.MaxBitsPerSecond`: `737,280,000`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F8 25 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 53 3B 00 00 00 00 40 0D 03 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 14 00 76 32 31 30 00 F8 25 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2,488,320`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `995328000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `20 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `2,488,320`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 0D 03 00 00 00 00 00 40 0D 03 00 00 00 00 00 00 80 53 3B 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `20 0000`
  * `.MaxFrameInterval`: `20 0000`
  * `.MinBitsPerSecond`: `995,328,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 74 83 AE 34 00 00 00 00 B1 8B 02 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 48 44 59 43 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,843,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `883852148`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6833`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `1,843,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B1 8B 02 00 00 00 00 00 B1 8B 02 00 00 00 00 00 73 83 AE 34 74 83 AE 34`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6833`
  * `.MaxFrameInterval`: `16 6833`
  * `.MinBitsPerSecond`: `883,852,147`
  * `.MaxBitsPerSecond`: `883,852,148`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F8 25 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 10 CB 1E 47 00 00 00 00 B1 8B 02 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 14 00 76 32 31 30 00 F8 25 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2,488,320`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1193200400`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6833`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `2,488,320`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B1 8B 02 00 00 00 00 00 B1 8B 02 00 00 00 00 00 0F CB 1E 47 10 CB 1E 47`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6833`
  * `.MaxFrameInterval`: `16 6833`
  * `.MinBitsPerSecond`: `1,193,200,399`
  * `.MaxBitsPerSecond`: `1,193,200,400`

#### Capability: 8

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 BC 34 00 00 00 00 0B 8B 02 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 48 44 59 43 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,843,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `884736000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `1,843,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0A 8B 02 00 00 00 00 00 0B 8B 02 00 00 00 00 00 00 00 BC 34 00 00 BC 34`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6666`
  * `.MaxFrameInterval`: `16 6667`
  * `.MinBitsPerSecond`: `884,736,000`
  * `.MaxBitsPerSecond`: `884,736,000`

#### Capability: 9

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F8 25 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 31 47 00 00 00 00 0B 8B 02 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 14 00 76 32 31 30 00 F8 25 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2,488,320`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1194393600`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `2,488,320`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0A 8B 02 00 00 00 00 00 0B 8B 02 00 00 00 00 00 00 00 31 47 00 00 31 47`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6666`
  * `.MaxFrameInterval`: `16 6667`
  * `.MinBitsPerSecond`: `1,194,393,600`
  * `.MaxBitsPerSecond`: `1,194,393,600`

#### Capability: 10

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 70 31 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `829440000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 40 70 31 00 40 70 31`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `829,440,000`
  * `.MaxBitsPerSecond`: `829,440,000`

#### Capability: 11

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 54 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 EB 41 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 14 00 76 32 31 30 00 60 54 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `5,529,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1105920000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `5,529,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 00 EB 41 00 00 EB 41`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `1,105,920,000`
  * `.MaxBitsPerSecond`: `1,105,920,000`

#### Capability: 12

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 E2 53 44 3B 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `994333666`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 62 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 E2 53 44 3B E2 53 44 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3666`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `994,333,666`
  * `.MaxBitsPerSecond`: `994,333,666`

#### Capability: 13

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 54 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2E C5 05 4F 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 14 00 76 32 31 30 00 60 54 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `5,529,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1325778222`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `5,529,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 62 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 2D C5 05 4F 2E C5 05 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3666`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `1,325,778,221`
  * `.MaxBitsPerSecond`: `1,325,778,222`

#### Capability: 14

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 53 3B 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `995328000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 80 53 3B 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `995,328,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 15

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 54 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 1A 4F 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 14 00 76 32 31 30 00 60 54 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `5,529,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1327104000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `5,529,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 1A 4F 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `1,327,104,000`
  * `.MaxBitsPerSecond`: `1,327,104,000`

#### Capability: 16

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B5 DC 69 2F 00 00 00 00 3B 5D 06 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `795466933`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 7083`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3B 5D 06 00 00 00 00 00 3B 5D 06 00 00 00 00 00 B5 DC 69 2F B5 DC 69 2F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 7083`
  * `.MaxFrameInterval`: `41 7083`
  * `.MinBitsPerSecond`: `795,466,933`
  * `.MaxBitsPerSecond`: `795,466,933`

#### Capability: 17

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 54 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 F1 D0 37 3F 00 00 00 00 3B 5D 06 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 14 00 76 32 31 30 00 60 54 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `5,529,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1060622577`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 7083`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `5,529,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3B 5D 06 00 00 00 00 00 3B 5D 06 00 00 00 00 00 F1 D0 37 3F F1 D0 37 3F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 7083`
  * `.MaxFrameInterval`: `41 7083`
  * `.MinBitsPerSecond`: `1,060,622,577`
  * `.MaxBitsPerSecond`: `1,060,622,577`

#### Capability: 18

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 76 2F 00 00 00 00 9B 5B 06 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `796262400`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 6667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 9A 5B 06 00 00 00 00 00 9B 5B 06 00 00 00 00 00 00 00 76 2F 00 00 76 2F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 6666`
  * `.MaxFrameInterval`: `41 6667`
  * `.MinBitsPerSecond`: `796,262,400`
  * `.MaxBitsPerSecond`: `796,262,400`

#### Capability: 19

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 54 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 48 3F 00 00 00 00 9B 5B 06 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 14 00 76 32 31 30 00 60 54 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `5,529,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1061683200`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 6667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `5,529,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 9A 5B 06 00 00 00 00 00 9B 5B 06 00 00 00 00 00 00 00 48 3F 00 00 48 3F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 6666`
  * `.MaxFrameInterval`: `41 6667`
  * `.MinBitsPerSecond`: `1,061,683,200`
  * `.MaxBitsPerSecond`: `1,061,683,200`

#### Capability: 20

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 E0 62 00 00 00 00 40 0D 03 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1658880000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `20 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 0D 03 00 00 00 00 00 40 0D 03 00 00 00 00 00 00 80 E0 62 00 80 E0 62`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `20 0000`
  * `.MaxFrameInterval`: `20 0000`
  * `.MinBitsPerSecond`: `1,658,880,000`
  * `.MaxBitsPerSecond`: `1,658,880,000`

#### Capability: 21

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 54 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D6 83 00 00 00 00 40 0D 03 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 14 00 76 32 31 30 00 60 54 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `5,529,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `-2083127296`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `20 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `5,529,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 0D 03 00 00 00 00 00 40 0D 03 00 00 00 00 00 00 00 D6 83 00 00 D6 83`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `20 0000`
  * `.MaxFrameInterval`: `20 0000`
  * `.MinBitsPerSecond`: `-2,083,127,296`
  * `.MaxBitsPerSecond`: `-2,083,127,296`

#### Capability: 22

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 C5 A7 88 76 00 00 00 00 B1 8B 02 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1988667333`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6833`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B1 8B 02 00 00 00 00 00 B1 8B 02 00 00 00 00 00 C4 A7 88 76 C5 A7 88 76`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6833`
  * `.MaxFrameInterval`: `16 6833`
  * `.MinBitsPerSecond`: `1,988,667,332`
  * `.MaxBitsPerSecond`: `1,988,667,333`

#### Capability: 23

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 54 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 5C 8A 0B 9E 00 00 00 00 B1 8B 02 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 14 00 76 32 31 30 00 60 54 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `5,529,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `-1643410852`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6833`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `5,529,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B1 8B 02 00 00 00 00 00 B1 8B 02 00 00 00 00 00 5B 8A 0B 9E 5C 8A 0B 9E`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6833`
  * `.MaxFrameInterval`: `16 6833`
  * `.MinBitsPerSecond`: `-1,643,410,853`
  * `.MaxBitsPerSecond`: `-1,643,410,852`

#### Capability: 24

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A7 76 00 00 00 00 0B 8B 02 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1990656000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0A 8B 02 00 00 00 00 00 0B 8B 02 00 00 00 00 00 00 00 A7 76 00 00 A7 76`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6666`
  * `.MaxFrameInterval`: `16 6667`
  * `.MinBitsPerSecond`: `1,990,656,000`
  * `.MaxBitsPerSecond`: `1,990,656,000`

#### Capability: 25

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 54 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 54 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 34 9E 00 00 00 00 0B 8B 02 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 14 00 76 32 31 30 00 60 54 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `5,529,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `-1640759296`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `5,529,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0A 8B 02 00 00 00 00 00 0B 8B 02 00 00 00 00 00 00 00 34 9E 00 00 34 9E`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6666`
  * `.MaxFrameInterval`: `16 6667`
  * `.MinBitsPerSecond`: `-1,640,759,296`
  * `.MaxBitsPerSecond`: `-1,640,759,296`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

Property Pages:

  * `{71F96467-78F3-11D0-A18C-00A0C9118956}` - `CLSID_VideoStreamConfigPropertyPage`, VideoStreamConfig Property Page

### Pin: Audio Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `6`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 D8 61 57 00`
  * Format Data: `01 00 02 00 80 BB 00 00 00 EE 02 00 04 00 10 00 00 00`
  * `.majortype`: `MEDIATYPE_Audio`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `192000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 10 00 00 00 10 00 00 00 01 00 00 00 80 BB 00 00 80 BB 00 00 01 00 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `16`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `48000`
  * `.MaximumSampleFrequency`: `48000`
  * `.SampleFrequencyGranularity`: `1`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 08 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 D8 61 57 00`
  * Format Data: `01 00 02 00 80 BB 00 00 00 DC 05 00 08 00 20 00 00 00`
  * `.majortype`: `MEDIATYPE_Audio`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `8`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `384000`
   * `.nBlockAlign`: `8`
   * `.wBitsPerSample`: `32`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 20 00 00 00 20 00 00 00 01 00 00 00 80 BB 00 00 80 BB 00 00 01 00 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `32`
  * `.MaximumBitsPerSample`: `32`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `48000`
  * `.MaximumSampleFrequency`: `48000`
  * `.SampleFrequencyGranularity`: `1`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 10 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 D8 61 57 00`
  * Format Data: `01 00 08 00 80 BB 00 00 00 B8 0B 00 10 00 10 00 00 00`
  * `.majortype`: `MEDIATYPE_Audio`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `16`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `8`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `768000`
   * `.nBlockAlign`: `16`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 08 00 00 00 01 00 00 00 10 00 00 00 10 00 00 00 01 00 00 00 80 BB 00 00 80 BB 00 00 01 00 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `8`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `16`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `48000`
  * `.MaximumSampleFrequency`: `48000`
  * `.SampleFrequencyGranularity`: `1`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 20 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 D8 61 57 00`
  * Format Data: `01 00 08 00 80 BB 00 00 00 70 17 00 20 00 20 00 00 00`
  * `.majortype`: `MEDIATYPE_Audio`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `32`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `8`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `1536000`
   * `.nBlockAlign`: `32`
   * `.wBitsPerSample`: `32`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 08 00 00 00 01 00 00 00 20 00 00 00 20 00 00 00 01 00 00 00 80 BB 00 00 80 BB 00 00 01 00 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `8`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `32`
  * `.MaximumBitsPerSample`: `32`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `48000`
  * `.MaximumSampleFrequency`: `48000`
  * `.SampleFrequencyGranularity`: `1`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 20 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 D8 61 57 00`
  * Format Data: `01 00 10 00 80 BB 00 00 00 70 17 00 20 00 10 00 00 00`
  * `.majortype`: `MEDIATYPE_Audio`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `32`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `16`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `1536000`
   * `.nBlockAlign`: `32`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 10 00 00 00 01 00 00 00 10 00 00 00 10 00 00 00 01 00 00 00 80 BB 00 00 80 BB 00 00 01 00 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `16`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `16`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `48000`
  * `.MaximumSampleFrequency`: `48000`
  * `.SampleFrequencyGranularity`: `1`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 40 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 D8 61 57 00`
  * Format Data: `01 00 10 00 80 BB 00 00 00 E0 2E 00 40 00 20 00 00 00`
  * `.majortype`: `MEDIATYPE_Audio`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `64`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `16`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `3072000`
   * `.nBlockAlign`: `64`
   * `.wBitsPerSample`: `32`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 10 00 00 00 01 00 00 00 20 00 00 00 20 00 00 00 01 00 00 00 80 BB 00 00 80 BB 00 00 01 00 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `16`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `32`
  * `.MaximumBitsPerSample`: `32`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `48000`
  * `.MaximumSampleFrequency`: `48000`
  * `.SampleFrequencyGranularity`: `1`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

Property Pages:

  * `{71F96467-78F3-11D0-A18C-00A0C9118956}` - `CLSID_VideoStreamConfigPropertyPage`, VideoStreamConfig Property Page

## Device: Microsoft® LifeCam Cinema(TM)

 * Moniker Display Name: `@device:pnp:\\?\usb#vid_045e&pid_075d&mi_00#6&1ea884ca&0&0000#{65e8773d-8f56-11d0-a3b9-00a0c9223196}\global`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IAMCameraControl`
  * `IAMDeviceRemoval`
  * `IAMDroppedFrames`
  * `IAMFilterMiscFlags`
  * `IAMVideoControl`
  * `IAMVideoProcAmp`

Property Pages:

  * `{71F96464-78F3-11D0-A18C-00A0C9118956}` - `CLSID_VideoProcAmpPropertyPage`, VideoProcAmp Property Page
  * `{71F96465-78F3-11D0-A18C-00A0C9118956}` - `CLSID_CameraControlPropertyPage`, CameraControl Property Page

### IAMVideoProcAmp

 * `VideoProcAmp_Brightness`: `142`, flags `0x02`, `30`..`255`, step `1`, default `133`, cap flags `0x02`
 * `VideoProcAmp_Contrast`: `5`, flags `0x02`, `0`..`10`, step `1`, default `5`, cap flags `0x02`
 * `VideoProcAmp_Saturation`: `100`, flags `0x02`, `0`..`200`, step `1`, default `83`, cap flags `0x02`
 * `VideoProcAmp_Sharpness`: `25`, flags `0x02`, `0`..`50`, step `1`, default `25`, cap flags `0x02`
 * `VideoProcAmp_WhiteBalance`: `4500`, flags `0x01`, `2800`..`10000`, step `1`, default `4500`, cap flags `0x03`
 * `VideoProcAmp_BacklightCompensation`: `0`, flags `0x02`, `0`..`10`, step `1`, default `0`, cap flags `0x02`

### IAMCameraControl

 * `CameraControl_Pan`: `0`, flags `0x02`, `-56`..`56`, step `1`, default `0`, cap flags `0x02`
 * `CameraControl_Tilt`: `0`, flags `0x02`, `-56`..`56`, step `1`, default `0`, cap flags `0x02`
 * `CameraControl_Zoom`: `0`, flags `0x02`, `0`..`10`, step `1`, default `0`, cap flags `0x02`
 * `CameraControl_Exposure`: `-6`, flags `0x01`, `-11`..`1`, step `1`, default `-6`, cap flags `0x03`
 * `CameraControl_Focus`: `12`, flags `0x01`, `0`..`40`, step `1`, default `0`, cap flags `0x03`

### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `46`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 CA 08 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 59 55 59 32 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `614,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 80 32 02 00 00 CA 08`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `640` x `480`
  * `.MinCroppingSize`: `640` x `480`
  * `.MaxCroppingSize`: `640` x `480`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `640` x `480`
  * `.MaxOutputSize`: `640` x `480`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `133 3333`
  * `.MinBitsPerSecond`: `36,864,000`
  * `.MaxBitsPerSecond`: `147,456,000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 CA 08 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 59 55 59 32 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614,400`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 80 32 02 00 00 CA 08`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 CA 08 00 00 00 00 40 42 0F 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 59 55 59 32 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,843,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `100 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `1,843,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 42 0F 00 00 00 00 00 55 58 14 00 00 00 00 00 00 80 97 06 00 00 CA 08`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `100 0000`
  * `.MaxFrameInterval`: `133 3333`
  * `.MinBitsPerSecond`: `110,592,000`
  * `.MaxBitsPerSecond`: `147,456,000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 CA 08 00 00 00 00 40 42 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 59 55 59 32 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,843,200`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 42 0F 00 00 00 00 00 55 58 14 00 00 00 00 00 00 80 97 06 00 00 CA 08`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F0 0F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 78 07 00 00 00 00 2A 2C 0A 00 00 00 00 00 28 00 00 00 C0 03 00 00 20 02 00 00 01 00 10 00 59 55 59 32 00 F0 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,044,480`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `125337600`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `66 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `960`
   * `.biHeight`: `544`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `1,044,480`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 C0 03 00 00 20 02 00 00 C0 03 00 00 20 02 00 00 C0 03 00 00 20 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 C0 03 00 00 20 02 00 00 C0 03 00 00 20 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2A 2C 0A 00 00 00 00 00 55 58 14 00 00 00 00 00 00 40 BC 03 00 80 78 07`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `960` x `544`
  * `.MinCroppingSize`: `960` x `544`
  * `.MaxCroppingSize`: `960` x `544`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `960` x `544`
  * `.MaxOutputSize`: `960` x `544`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `66 6666`
  * `.MaxFrameInterval`: `133 3333`
  * `.MinBitsPerSecond`: `62,668,800`
  * `.MaxBitsPerSecond`: `125,337,600`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F0 0F 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 78 07 00 00 00 00 2A 2C 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 C0 03 00 00 20 02 00 00 01 00 10 00 59 55 59 32 00 F0 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,044,480`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 C0 03 00 00 20 02 00 00 C0 03 00 00 20 02 00 00 C0 03 00 00 20 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 C0 03 00 00 20 02 00 00 C0 03 00 00 20 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2A 2C 0A 00 00 00 00 00 55 58 14 00 00 00 00 00 00 40 BC 03 00 80 78 07`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F0 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D6 06 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 20 03 00 00 C0 01 00 00 01 00 10 00 59 55 59 32 00 F0 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `716,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `114688000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `800`
   * `.biHeight`: `448`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `716,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 55 58 14 00 00 00 00 00 00 40 90 02 00 00 D6 06`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `800` x `448`
  * `.MinCroppingSize`: `800` x `448`
  * `.MaxCroppingSize`: `800` x `448`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `800` x `448`
  * `.MaxOutputSize`: `800` x `448`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `50 0000`
  * `.MaxFrameInterval`: `133 3333`
  * `.MinBitsPerSecond`: `43,008,000`
  * `.MaxBitsPerSecond`: `114,688,000`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F0 0A 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D6 06 00 00 00 00 20 A1 07 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 20 03 00 00 C0 01 00 00 01 00 10 00 59 55 59 32 00 F0 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `716,800`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 55 58 14 00 00 00 00 00 00 40 90 02 00 00 D6 06`

#### Capability: 8

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 08 07 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 97 06 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 68 01 00 00 01 00 10 00 59 55 59 32 00 08 07 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `460,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `110592000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `360`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `460,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 E0 A5 01 00 80 97 06`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `640` x `360`
  * `.MinCroppingSize`: `640` x `360`
  * `.MaxCroppingSize`: `640` x `360`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `640` x `360`
  * `.MaxOutputSize`: `640` x `360`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `133 3333`
  * `.MinBitsPerSecond`: `27,648,000`
  * `.MaxBitsPerSecond`: `110,592,000`

#### Capability: 9

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 08 07 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 97 06 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 80 02 00 00 68 01 00 00 01 00 10 00 59 55 59 32 00 08 07 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `460,800`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 E0 A5 01 00 80 97 06`

#### Capability: 10

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 1B 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 50 E9 02 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 A8 01 00 00 F0 00 00 00 01 00 10 00 59 55 59 32 00 1B 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `203,520`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `48844800`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `424`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `203,520`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 A8 01 00 00 F0 00 00 00 A8 01 00 00 F0 00 00 00 A8 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A8 01 00 00 F0 00 00 00 A8 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 54 BA 00 00 50 E9 02`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `424` x `240`
  * `.MinCroppingSize`: `424` x `240`
  * `.MaxCroppingSize`: `424` x `240`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `424` x `240`
  * `.MaxOutputSize`: `424` x `240`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `133 3333`
  * `.MinBitsPerSecond`: `12,211,200`
  * `.MaxBitsPerSecond`: `48,844,800`

#### Capability: 11

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 1B 03 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 50 E9 02 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 A8 01 00 00 F0 00 00 00 01 00 10 00 59 55 59 32 00 1B 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `203,520`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 A8 01 00 00 F0 00 00 00 A8 01 00 00 F0 00 00 00 A8 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A8 01 00 00 F0 00 00 00 A8 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 54 BA 00 00 50 E9 02`

#### Capability: 12

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 18 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 E6 02 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 60 01 00 00 20 01 00 00 01 00 10 00 59 55 59 32 00 18 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `202,752`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `48660480`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `352`
   * `.biHeight`: `288`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `202,752`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 A0 B9 00 00 80 E6 02`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `352` x `288`
  * `.MinCroppingSize`: `352` x `288`
  * `.MaxCroppingSize`: `352` x `288`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `352` x `288`
  * `.MaxOutputSize`: `352` x `288`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `133 3333`
  * `.MinBitsPerSecond`: `12,165,120`
  * `.MaxBitsPerSecond`: `48,660,480`

#### Capability: 13

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 18 03 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 E6 02 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 60 01 00 00 20 01 00 00 01 00 10 00 59 55 59 32 00 18 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `202,752`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 A0 B9 00 00 80 E6 02`

#### Capability: 14

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 58 02 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 32 02 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 10 00 59 55 59 32 00 58 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `153,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `36864000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `153,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 A0 8C 00 00 80 32 02`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `320` x `240`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `320` x `240`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `320` x `240`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `133 3333`
  * `.MinBitsPerSecond`: `9,216,000`
  * `.MaxBitsPerSecond`: `36,864,000`

#### Capability: 15

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 58 02 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 32 02 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 10 00 59 55 59 32 00 58 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `153,600`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 A0 8C 00 00 80 32 02`

#### Capability: 16

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A6 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 DD 06 00 00 00 00 2A 2C 0A 00 00 00 00 00 28 00 00 00 20 03 00 00 58 02 00 00 01 00 10 00 59 55 59 32 00 A6 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `960,000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `115200000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `66 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `800`
   * `.biHeight`: `600`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `960,000`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2A 2C 0A 00 00 00 00 00 55 58 14 00 00 00 00 00 00 E8 6E 03 00 D0 DD 06`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `800` x `600`
  * `.MinCroppingSize`: `800` x `600`
  * `.MaxCroppingSize`: `800` x `600`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `800` x `600`
  * `.MaxOutputSize`: `800` x `600`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `66 6666`
  * `.MaxFrameInterval`: `133 3333`
  * `.MinBitsPerSecond`: `57,600,000`
  * `.MaxBitsPerSecond`: `115,200,000`

#### Capability: 17

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A6 0E 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 DD 06 00 00 00 00 2A 2C 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 20 03 00 00 58 02 00 00 01 00 10 00 59 55 59 32 00 A6 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `960,000`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2A 2C 0A 00 00 00 00 00 55 58 14 00 00 00 00 00 00 E8 6E 03 00 D0 DD 06`

#### Capability: 18

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 C6 00 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A0 B9 00 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 B0 00 00 00 90 00 00 00 01 00 10 00 59 55 59 32 00 C6 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `50,688`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `12165120`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `176`
   * `.biHeight`: `144`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `50,688`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 68 2E 00 00 A0 B9 00`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `176` x `144`
  * `.MinCroppingSize`: `176` x `144`
  * `.MaxCroppingSize`: `176` x `144`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `176` x `144`
  * `.MaxOutputSize`: `176` x `144`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `133 3333`
  * `.MinBitsPerSecond`: `3,041,280`
  * `.MaxBitsPerSecond`: `12,165,120`

#### Capability: 19

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 C6 00 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A0 B9 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 B0 00 00 00 90 00 00 00 01 00 10 00 59 55 59 32 00 C6 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `50,688`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 68 2E 00 00 A0 B9 00`

#### Capability: 20

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 96 00 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A0 8C 00 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 A0 00 00 00 78 00 00 00 01 00 10 00 59 55 59 32 00 96 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `38,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `9216000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `160`
   * `.biHeight`: `120`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `38,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 28 23 00 00 A0 8C 00`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `160` x `120`
  * `.MinCroppingSize`: `160` x `120`
  * `.MaxCroppingSize`: `160` x `120`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `160` x `120`
  * `.MaxOutputSize`: `160` x `120`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `133 3333`
  * `.MinBitsPerSecond`: `2,304,000`
  * `.MaxBitsPerSecond`: `9,216,000`

#### Capability: 21

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 96 00 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A0 8C 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 A0 00 00 00 78 00 00 00 01 00 10 00 59 55 59 32 00 96 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `38,400`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 28 23 00 00 A0 8C 00`

#### Capability: 22

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 40 1F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 C4 09 00 00 00 00 40 42 0F 00 00 00 00 00 28 00 00 00 00 05 00 00 20 03 00 00 01 00 10 00 59 55 59 32 00 40 1F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2,048,000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `163840000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `100 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `800`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `2,048,000`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 20 03 00 00 00 05 00 00 20 03 00 00 00 05 00 00 20 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 05 00 00 20 03 00 00 00 05 00 00 20 03 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 42 0F 00 00 00 00 00 40 42 0F 00 00 00 00 00 00 00 C4 09 00 00 C4 09`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `800`
  * `.MinCroppingSize`: `1280` x `800`
  * `.MaxCroppingSize`: `1280` x `800`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1280` x `800`
  * `.MaxOutputSize`: `1280` x `800`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `100 0000`
  * `.MaxFrameInterval`: `100 0000`
  * `.MinBitsPerSecond`: `163,840,000`
  * `.MaxBitsPerSecond`: `163,840,000`

#### Capability: 23

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 40 1F 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 C4 09 00 00 00 00 40 42 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 26 8D 00 00 00 00 00 28 00 00 00 00 05 00 00 20 03 00 00 01 00 10 00 59 55 59 32 00 40 1F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2,048,000`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 05 00 00 20 03 00 00 00 05 00 00 20 03 00 00 00 05 00 00 20 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 05 00 00 20 03 00 00 00 05 00 00 20 03 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 42 0F 00 00 00 00 00 40 42 0F 00 00 00 00 00 00 00 C4 09 00 00 C4 09`

#### Capability: 24

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 4A 50 47 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `921,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 80 32 02 00 00 CA 08`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `640` x `480`
  * `.MinCroppingSize`: `640` x `480`
  * `.MaxCroppingSize`: `640` x `480`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `640` x `480`
  * `.MaxOutputSize`: `640` x `480`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `133 3333`
  * `.MinBitsPerSecond`: `36,864,000`
  * `.MaxBitsPerSecond`: `147,456,000`

#### Capability: 25

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 10 0E 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 21 8D 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 4D 4A 50 47 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921,600`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 80 32 02 00 00 CA 08`

#### Capability: 26

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 30 2A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 8D 27 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 18 00 4D 4A 50 47 00 30 2A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2,764,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `663552000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `2,764,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 80 97 06 00 00 5E 1A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `133 3333`
  * `.MinBitsPerSecond`: `110,592,000`
  * `.MaxBitsPerSecond`: `442,368,000`

#### Capability: 27

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 30 2A 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 8D 27 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 21 8D 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 18 00 4D 4A 50 47 00 30 2A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2,764,800`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 80 97 06 00 00 5E 1A`

#### Capability: 28

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 E8 17 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 69 16 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 C0 03 00 00 20 02 00 00 01 00 18 00 4D 4A 50 47 00 E8 17 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,566,720`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `376012800`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `960`
   * `.biHeight`: `544`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `1,566,720`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 C0 03 00 00 20 02 00 00 C0 03 00 00 20 02 00 00 C0 03 00 00 20 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 C0 03 00 00 20 02 00 00 C0 03 00 00 20 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 40 BC 03 00 00 F1 0E`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `960` x `544`
  * `.MinCroppingSize`: `960` x `544`
  * `.MaxCroppingSize`: `960` x `544`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `960` x `544`
  * `.MaxOutputSize`: `960` x `544`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `133 3333`
  * `.MinBitsPerSecond`: `62,668,800`
  * `.MaxBitsPerSecond`: `250,675,200`

#### Capability: 29

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 E8 17 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 69 16 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 21 8D 00 00 00 00 00 28 00 00 00 C0 03 00 00 20 02 00 00 01 00 18 00 4D 4A 50 47 00 E8 17 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,566,720`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 C0 03 00 00 20 02 00 00 C0 03 00 00 20 02 00 00 C0 03 00 00 20 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 C0 03 00 00 20 02 00 00 C0 03 00 00 20 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 40 BC 03 00 00 F1 0E`

#### Capability: 30

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 68 10 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 61 0F 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 20 03 00 00 C0 01 00 00 01 00 18 00 4D 4A 50 47 00 68 10 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,075,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `258048000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `800`
   * `.biHeight`: `448`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `1,075,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 40 90 02 00 00 41 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `800` x `448`
  * `.MinCroppingSize`: `800` x `448`
  * `.MaxCroppingSize`: `800` x `448`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `800` x `448`
  * `.MaxOutputSize`: `800` x `448`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `133 3333`
  * `.MinBitsPerSecond`: `43,008,000`
  * `.MaxBitsPerSecond`: `172,032,000`

#### Capability: 31

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 68 10 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 61 0F 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 21 8D 00 00 00 00 00 28 00 00 00 20 03 00 00 C0 01 00 00 01 00 18 00 4D 4A 50 47 00 68 10 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,075,200`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 C0 01 00 00 20 03 00 00 C0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 40 90 02 00 00 41 0A`

#### Capability: 32

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 8C 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 E3 09 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 68 01 00 00 01 00 18 00 4D 4A 50 47 00 8C 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `691,200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `165888000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `360`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `691,200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 E0 A5 01 00 80 97 06`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `640` x `360`
  * `.MinCroppingSize`: `640` x `360`
  * `.MaxCroppingSize`: `640` x `360`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `640` x `360`
  * `.MaxOutputSize`: `640` x `360`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `133 3333`
  * `.MinBitsPerSecond`: `27,648,000`
  * `.MaxBitsPerSecond`: `110,592,000`

#### Capability: 33

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 8C 0A 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 E3 09 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 21 8D 00 00 00 00 00 28 00 00 00 80 02 00 00 68 01 00 00 01 00 18 00 4D 4A 50 47 00 8C 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `691,200`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 68 01 00 00 80 02 00 00 68 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 E0 A5 01 00 80 97 06`

#### Capability: 34

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F9 15 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 70 99 14 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 20 03 00 00 58 02 00 00 01 00 18 00 4D 4A 50 47 00 F9 15 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,440,000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `345600000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `800`
   * `.biHeight`: `600`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `1,440,000`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 E8 6E 03 00 A0 BB 0D`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `800` x `600`
  * `.MinCroppingSize`: `800` x `600`
  * `.MaxCroppingSize`: `800` x `600`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `800` x `600`
  * `.MaxOutputSize`: `800` x `600`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `133 3333`
  * `.MinBitsPerSecond`: `57,600,000`
  * `.MaxBitsPerSecond`: `230,400,000`

#### Capability: 35

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F9 15 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 70 99 14 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 21 8D 00 00 00 00 00 28 00 00 00 20 03 00 00 58 02 00 00 01 00 18 00 4D 4A 50 47 00 F9 15 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,440,000`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 E8 6E 03 00 A0 BB 0D`

#### Capability: 36

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 92 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 E0 48 04 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 A0 01 00 00 F0 00 00 00 01 00 18 00 4D 4A 50 47 00 92 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `299,520`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `71884800`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `416`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `299,520`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 A0 01 00 00 F0 00 00 00 A0 01 00 00 F0 00 00 00 A0 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 01 00 00 F0 00 00 00 A0 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 D0 B6 00 00 40 DB 02`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `416` x `240`
  * `.MinCroppingSize`: `416` x `240`
  * `.MaxCroppingSize`: `416` x `240`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `416` x `240`
  * `.MaxOutputSize`: `416` x `240`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `133 3333`
  * `.MinBitsPerSecond`: `11,980,800`
  * `.MaxBitsPerSecond`: `47,923,200`

#### Capability: 37

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 92 04 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 E0 48 04 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 21 8D 00 00 00 00 00 28 00 00 00 A0 01 00 00 F0 00 00 00 01 00 18 00 4D 4A 50 47 00 92 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `299,520`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 A0 01 00 00 F0 00 00 00 A0 01 00 00 F0 00 00 00 A0 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 01 00 00 F0 00 00 00 A0 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 D0 B6 00 00 40 DB 02`

#### Capability: 38

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A4 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 C0 59 04 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 60 01 00 00 20 01 00 00 01 00 18 00 4D 4A 50 47 00 A4 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `304,128`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `72990720`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `352`
   * `.biHeight`: `288`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `304,128`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 A0 B9 00 00 80 E6 02`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `352` x `288`
  * `.MinCroppingSize`: `352` x `288`
  * `.MaxCroppingSize`: `352` x `288`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `352` x `288`
  * `.MaxOutputSize`: `352` x `288`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `133 3333`
  * `.MinBitsPerSecond`: `12,165,120`
  * `.MaxBitsPerSecond`: `48,660,480`

#### Capability: 39

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A4 04 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 C0 59 04 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 21 8D 00 00 00 00 00 28 00 00 00 60 01 00 00 20 01 00 00 01 00 18 00 4D 4A 50 47 00 A4 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `304,128`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 A0 B9 00 00 80 E6 02`

#### Capability: 40

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 29 01 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 70 16 01 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 B0 00 00 00 90 00 00 00 01 00 18 00 4D 4A 50 47 00 29 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `76,032`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `18247680`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `176`
   * `.biHeight`: `144`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `76,032`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 68 2E 00 00 A0 B9 00`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `176` x `144`
  * `.MinCroppingSize`: `176` x `144`
  * `.MaxCroppingSize`: `176` x `144`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `176` x `144`
  * `.MaxOutputSize`: `176` x `144`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `133 3333`
  * `.MinBitsPerSecond`: `3,041,280`
  * `.MaxBitsPerSecond`: `12,165,120`

#### Capability: 41

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 29 01 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 70 16 01 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 21 8D 00 00 00 00 00 28 00 00 00 B0 00 00 00 90 00 00 00 01 00 18 00 4D 4A 50 47 00 29 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `76,032`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 68 2E 00 00 A0 B9 00`

#### Capability: 42

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 C0 4B 03 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 4A 50 47 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `55296000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `230,400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 A0 8C 00 00 80 32 02`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `320` x `240`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `320` x `240`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `320` x `240`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `133 3333`
  * `.MinBitsPerSecond`: `9,216,000`
  * `.MaxBitsPerSecond`: `36,864,000`

#### Capability: 43

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 84 03 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 C0 4B 03 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 21 8D 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 4D 4A 50 47 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `230,400`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 A0 8C 00 00 80 32 02`

#### Capability: 44

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 E1 00 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 50 56 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 F0 D2 00 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 A0 00 00 00 78 00 00 00 01 00 18 00 4D 4A 50 47 00 E1 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `57,600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `13824000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `160`
   * `.biHeight`: `120`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `57,600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 28 23 00 00 A0 8C 00`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `160` x `120`
  * `.MinCroppingSize`: `160` x `120`
  * `.MaxCroppingSize`: `160` x `120`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `160` x `120`
  * `.MaxOutputSize`: `160` x `120`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `133 3333`
  * `.MinBitsPerSecond`: `2,304,000`
  * `.MaxBitsPerSecond`: `9,216,000`

#### Capability: 45

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 E1 00 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 18 67 5A 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 F0 D2 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 81 21 8D 00 00 00 00 00 28 00 00 00 A0 00 00 00 78 00 00 00 01 00 18 00 4D 4A 50 47 00 E1 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `57,600`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 55 58 14 00 00 00 00 00 00 28 23 00 00 A0 8C 00`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

Property Pages:

  * `{71F96467-78F3-11D0-A18C-00A0C9118956}` - `CLSID_VideoStreamConfigPropertyPage`, VideoStreamConfig Property Page

### Pin: Video Camera Terminal

 * Direction: `PINDIR_INPUT`
 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{3EBC7959-3310-493B-AA81-C7E132D56F71}`
Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`
  * `IStreamBuilder`

## Device: Decklink Video Capture

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{44A8B5C7-13B6-4211-BD40-35B629D9E6DF}`
 * DeckLink IO Features: `0x03388CC0`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IReferenceClock`
  * `IAMDroppedFrames`
  * `IAMExtDevice`
  * `IAMExtTransport`
  * `IAMFilterMiscFlags`
  * `IAMTimecodeReader`

Property Pages:

  * `{50D29FCF-70ED-4155-9B2A-91F2CE9A86BA}` - Decklink Video Capture Properties

### IAMExtDevice

 * Capabilities:
  * `ED_DEVCAP_AUDIO_INPUTS`: `-1` (`0xffffffff`)
  * `ED_DEVCAP_CAN_MONITOR_SOURCES`: `0` (`0x0`)
  * `ED_DEVCAP_CAN_RECORD`: `-1` (`0xffffffff`)
  * `ED_DEVCAP_CAN_RECORD_STROBE`: `-1` (`0xffffffff`)
  * `ED_DEVCAP_CAN_SAVE`: `0` (`0x0`)
  * `ED_DEVCAP_CTLTRK_READ`: `0` (`0x0`)
  * `ED_DEVCAP_HAS_AUDIO`: `-1` (`0xffffffff`)
  * `ED_DEVCAP_HAS_VIDEO`: `-1` (`0xffffffff`)
  * `ED_DEVCAP_INDEX_READ`: `0` (`0x0`)
  * `ED_DEVCAP_NEEDS_CALIBRATING`: `0` (`0x0`)
  * `ED_DEVCAP_TIMECODE_READ`: `-1` (`0xffffffff`)
  * `ED_DEVCAP_TIMECODE_WRITE`: `0` (`0x0`)
  * `ED_DEVCAP_USES_FILES`: `0` (`0x0`)
  * `ED_DEVCAP_VIDEO_INPUTS`: `-1` (`0xffffffff`)
  * `ED_DEVCAP_DEVICE_TYPE`: `4104` (`0x1008`)
  * `ED_DEVCAP_SYNC_ACCURACY`: `4129` (`0x1021`)
  * `ED_DEVCAP_NORMAL_RATE`: `0` (`0x0`)
  * `ED_DEVCAP_SEEK_TYPE`: `4145` (`0x1031`)
  * `ED_DEVCAP_EXTERNAL_DEVICE_ID`: `0.00`
  * `ED_DEVCAP_PREROLL`: `0.00`
  * `ED_DEVCAP_POSTROLL`: `0.00`

### IAmExtTransport

### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `58`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 C0 AD 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ED 53 00 0A 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E6 01 00 00 01 00 10 00 55 59 56 59 C0 AD 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B5 0B 00 00 64 00 00 00 1E 01 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `699,840`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `167793645`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `486`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `699,840`
  * Extra Data: `00 00 00 00 B5 0B 00 00 64 00 00 00 1E 01 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E6 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E6 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 ED 53 00 0A ED 53 00 0A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `486`
  * `.MinCroppingSize`: `720` x `486`
  * `.MaxCroppingSize`: `720` x `486`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `720` x `486`
  * `.MaxOutputSize`: `720` x `486`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `167,793,645`
  * `.MaxBitsPerSecond`: `167,793,645`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A8 0C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 E3 09 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 10 00 55 59 56 59 00 A8 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `829,440`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `165888000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `829,440`
  * Extra Data: `00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 40 E3 09 00 40 E3 09`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `576`
  * `.MinCroppingSize`: `720` x `576`
  * `.MaxCroppingSize`: `720` x `576`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `720` x `576`
  * `.MaxOutputSize`: `720` x `576`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `165,888,000`
  * `.MaxBitsPerSecond`: `165,888,000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 54 D9 69 2F 00 00 00 00 3B 5D 06 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A8 5D 00 00 E8 03 00 00 18 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `795466068`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 7083`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
  * Extra Data: `00 00 00 00 A8 5D 00 00 E8 03 00 00 18 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3B 5D 06 00 00 00 00 00 3B 5D 06 00 00 00 00 00 54 D9 69 2F 54 D9 69 2F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 7083`
  * `.MaxFrameInterval`: `41 7083`
  * `.MinBitsPerSecond`: `795,466,068`
  * `.MaxBitsPerSecond`: `795,466,068`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 76 2F 00 00 00 00 9A 5B 06 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 18 00 00 00 01 00 00 00 18 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `796262400`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
  * Extra Data: `00 00 00 00 18 00 00 00 01 00 00 00 18 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 9A 5B 06 00 00 00 00 00 9A 5B 06 00 00 00 00 00 00 00 76 2F 00 00 76 2F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 6666`
  * `.MaxFrameInterval`: `41 6666`
  * `.MinBitsPerSecond`: `796,262,400`
  * `.MaxBitsPerSecond`: `796,262,400`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 70 31 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `829440000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
  * Extra Data: `00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 40 70 31 00 40 70 31`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `829,440,000`
  * `.MaxBitsPerSecond`: `829,440,000`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 28 50 44 3B 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B5 0B 00 00 64 00 00 00 1E 01 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `994332712`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
  * Extra Data: `00 00 00 00 B5 0B 00 00 64 00 00 00 1E 01 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 28 50 44 3B 28 50 44 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `994,332,712`
  * `.MaxBitsPerSecond`: `994,332,712`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 53 3B 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 1E 00 00 00 01 00 00 00 1E 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `995328000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
  * Extra Data: `00 00 00 00 1E 00 00 00 01 00 00 00 1E 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 80 53 3B 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `995,328,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 E0 62 00 00 00 00 40 0D 03 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 32 00 00 00 01 00 00 00 32 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1658880000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `20 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
  * Extra Data: `00 00 00 00 32 00 00 00 01 00 00 00 32 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 0D 03 00 00 00 00 00 40 0D 03 00 00 00 00 00 00 80 E0 62 00 80 E0 62`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `20 0000`
  * `.MaxFrameInterval`: `20 0000`
  * `.MinBitsPerSecond`: `1,658,880,000`
  * `.MaxBitsPerSecond`: `1,658,880,000`

#### Capability: 8

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 51 A0 88 76 00 00 00 00 B1 8B 02 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 6A 17 00 00 64 00 00 00 3C 01 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1988665425`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6833`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
  * Extra Data: `00 00 00 00 6A 17 00 00 64 00 00 00 3C 01 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B1 8B 02 00 00 00 00 00 B1 8B 02 00 00 00 00 00 51 A0 88 76 51 A0 88 76`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6833`
  * `.MaxFrameInterval`: `16 6833`
  * `.MinBitsPerSecond`: `1,988,665,425`
  * `.MaxBitsPerSecond`: `1,988,665,425`

#### Capability: 9

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A7 76 00 00 00 00 0A 8B 02 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 48 44 59 43 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3C 00 00 00 01 00 00 00 3C 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,147,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1990656000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `4,147,200`
  * Extra Data: `00 00 00 00 3C 00 00 00 01 00 00 00 3C 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0A 8B 02 00 00 00 00 00 0A 8B 02 00 00 00 00 00 00 00 A7 76 00 00 A7 76`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6666`
  * `.MaxFrameInterval`: `16 6666`
  * `.MinBitsPerSecond`: `1,990,656,000`
  * `.MaxBitsPerSecond`: `1,990,656,000`

#### Capability: 10

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 F2 2B 00 00 00 00 40 0D 03 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 48 44 59 43 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 32 00 00 00 01 00 00 00 32 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,843,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `737280000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `20 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `1,843,200`
  * Extra Data: `00 00 00 00 32 00 00 00 01 00 00 00 32 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 0D 03 00 00 00 00 00 40 0D 03 00 00 00 00 00 00 00 F2 2B 00 00 F2 2B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `20 0000`
  * `.MaxFrameInterval`: `20 0000`
  * `.MinBitsPerSecond`: `737,280,000`
  * `.MaxBitsPerSecond`: `737,280,000`

#### Capability: 11

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 24 80 AE 34 00 00 00 00 B1 8B 02 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 48 44 59 43 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 6A 17 00 00 64 00 00 00 3C 01 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,843,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `883851300`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6833`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `1,843,200`
  * Extra Data: `00 00 00 00 6A 17 00 00 64 00 00 00 3C 01 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B1 8B 02 00 00 00 00 00 B1 8B 02 00 00 00 00 00 24 80 AE 34 24 80 AE 34`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6833`
  * `.MaxFrameInterval`: `16 6833`
  * `.MinBitsPerSecond`: `883,851,300`
  * `.MaxBitsPerSecond`: `883,851,300`

#### Capability: 12

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 BC 34 00 00 00 00 0A 8B 02 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 48 44 59 43 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3C 00 00 00 01 00 00 00 3C 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,843,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `884736000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `1,843,200`
  * Extra Data: `00 00 00 00 3C 00 00 00 01 00 00 00 3C 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0A 8B 02 00 00 00 00 00 0A 8B 02 00 00 00 00 00 00 00 BC 34 00 00 BC 34`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6666`
  * `.MaxFrameInterval`: `16 6666`
  * `.MinBitsPerSecond`: `884,736,000`
  * `.MaxBitsPerSecond`: `884,736,000`

#### Capability: 13

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 90 7E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A9 B2 D3 5E 00 00 00 00 3B 5D 06 00 00 00 00 00 28 00 00 00 80 07 00 00 70 08 00 00 01 00 10 00 48 44 59 43 00 90 7E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A8 5D 00 00 E8 03 00 00 18 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `8,294,400`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1590932137`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 7083`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `8,294,400`
  * Extra Data: `00 00 00 00 A8 5D 00 00 E8 03 00 00 18 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3B 5D 06 00 00 00 00 00 3B 5D 06 00 00 00 00 00 A9 B2 D3 5E A9 B2 D3 5E`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `2160`
  * `.MinCroppingSize`: `1920` x `2160`
  * `.MaxCroppingSize`: `1920` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `2160`
  * `.MaxOutputSize`: `1920` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 7083`
  * `.MaxFrameInterval`: `41 7083`
  * `.MinBitsPerSecond`: `1,590,932,137`
  * `.MaxBitsPerSecond`: `1,590,932,137`

#### Capability: 14

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 90 7E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 EC 5E 00 00 00 00 9A 5B 06 00 00 00 00 00 28 00 00 00 80 07 00 00 70 08 00 00 01 00 10 00 48 44 59 43 00 90 7E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 18 00 00 00 01 00 00 00 18 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `8,294,400`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1592524800`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `8,294,400`
  * Extra Data: `00 00 00 00 18 00 00 00 01 00 00 00 18 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 9A 5B 06 00 00 00 00 00 9A 5B 06 00 00 00 00 00 00 00 EC 5E 00 00 EC 5E`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `2160`
  * `.MinCroppingSize`: `1920` x `2160`
  * `.MaxCroppingSize`: `1920` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `2160`
  * `.MaxOutputSize`: `1920` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 6666`
  * `.MaxFrameInterval`: `41 6666`
  * `.MinBitsPerSecond`: `1,592,524,800`
  * `.MaxBitsPerSecond`: `1,592,524,800`

#### Capability: 15

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 90 7E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 E0 62 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 07 00 00 70 08 00 00 01 00 10 00 48 44 59 43 00 90 7E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `8,294,400`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1658880000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `8,294,400`
  * Extra Data: `00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 80 E0 62 00 80 E0 62`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `2160`
  * `.MinCroppingSize`: `1920` x `2160`
  * `.MaxCroppingSize`: `1920` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `2160`
  * `.MaxOutputSize`: `1920` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `1,658,880,000`
  * `.MaxBitsPerSecond`: `1,658,880,000`

#### Capability: 16

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 90 7E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 51 A0 88 76 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 07 00 00 70 08 00 00 01 00 10 00 48 44 59 43 00 90 7E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B5 0B 00 00 64 00 00 00 1E 01 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `8,294,400`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1988665425`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `8,294,400`
  * Extra Data: `00 00 00 00 B5 0B 00 00 64 00 00 00 1E 01 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 51 A0 88 76 51 A0 88 76`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `2160`
  * `.MinCroppingSize`: `1920` x `2160`
  * `.MaxCroppingSize`: `1920` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `2160`
  * `.MaxOutputSize`: `1920` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `1,988,665,425`
  * `.MaxBitsPerSecond`: `1,988,665,425`

#### Capability: 17

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 90 7E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A7 76 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 07 00 00 70 08 00 00 01 00 10 00 48 44 59 43 00 90 7E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 1E 00 00 00 01 00 00 00 1E 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `8,294,400`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1990656000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `8,294,400`
  * Extra Data: `00 00 00 00 1E 00 00 00 01 00 00 00 1E 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 A7 76 00 00 A7 76`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `2160`
  * `.MinCroppingSize`: `1920` x `2160`
  * `.MaxCroppingSize`: `1920` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `2160`
  * `.MaxOutputSize`: `1920` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `1,990,656,000`
  * `.MaxBitsPerSecond`: `1,990,656,000`

#### Capability: 18

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 40 38 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 E4 57 00 00 00 00 40 0D 03 00 00 00 00 00 28 00 00 00 00 05 00 00 A0 05 00 00 01 00 10 00 48 44 59 43 00 40 38 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 32 00 00 00 01 00 00 00 32 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `3,686,400`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1474560000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `20 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `1440`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `3,686,400`
  * Extra Data: `00 00 00 00 32 00 00 00 01 00 00 00 32 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 A0 05 00 00 00 05 00 00 A0 05 00 00 00 05 00 00 A0 05 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 05 00 00 A0 05 00 00 00 05 00 00 A0 05 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 0D 03 00 00 00 00 00 40 0D 03 00 00 00 00 00 00 00 E4 57 00 00 E4 57`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `1440`
  * `.MinCroppingSize`: `1280` x `1440`
  * `.MaxCroppingSize`: `1280` x `1440`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1280` x `1440`
  * `.MaxOutputSize`: `1280` x `1440`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `20 0000`
  * `.MaxFrameInterval`: `20 0000`
  * `.MinBitsPerSecond`: `1,474,560,000`
  * `.MaxBitsPerSecond`: `1,474,560,000`

#### Capability: 19

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 40 38 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 48 00 5D 69 00 00 00 00 B1 8B 02 00 00 00 00 00 28 00 00 00 00 05 00 00 A0 05 00 00 01 00 10 00 48 44 59 43 00 40 38 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 6A 17 00 00 64 00 00 00 3C 01 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `3,686,400`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1767702600`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6833`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `1440`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `3,686,400`
  * Extra Data: `00 00 00 00 6A 17 00 00 64 00 00 00 3C 01 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 A0 05 00 00 00 05 00 00 A0 05 00 00 00 05 00 00 A0 05 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 05 00 00 A0 05 00 00 00 05 00 00 A0 05 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B1 8B 02 00 00 00 00 00 B1 8B 02 00 00 00 00 00 48 00 5D 69 48 00 5D 69`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `1440`
  * `.MinCroppingSize`: `1280` x `1440`
  * `.MaxCroppingSize`: `1280` x `1440`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1280` x `1440`
  * `.MaxOutputSize`: `1280` x `1440`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6833`
  * `.MaxFrameInterval`: `16 6833`
  * `.MinBitsPerSecond`: `1,767,702,600`
  * `.MaxBitsPerSecond`: `1,767,702,600`

#### Capability: 20

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 40 38 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 78 69 00 00 00 00 0A 8B 02 00 00 00 00 00 28 00 00 00 00 05 00 00 A0 05 00 00 01 00 10 00 48 44 59 43 00 40 38 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3C 00 00 00 01 00 00 00 3C 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `3,686,400`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1769472000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `1440`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `3,686,400`
  * Extra Data: `00 00 00 00 3C 00 00 00 01 00 00 00 3C 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 A0 05 00 00 00 05 00 00 A0 05 00 00 00 05 00 00 A0 05 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 05 00 00 A0 05 00 00 00 05 00 00 A0 05 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0A 8B 02 00 00 00 00 00 0A 8B 02 00 00 00 00 00 00 00 78 69 00 00 78 69`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `1440`
  * `.MinCroppingSize`: `1280` x `1440`
  * `.MaxCroppingSize`: `1280` x `1440`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1280` x `1440`
  * `.MaxOutputSize`: `1280` x `1440`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6666`
  * `.MaxFrameInterval`: `16 6666`
  * `.MinBitsPerSecond`: `1,769,472,000`
  * `.MaxBitsPerSecond`: `1,769,472,000`

#### Capability: 21

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 FD 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 53 65 A7 BD 00 00 00 00 3B 5D 06 00 00 00 00 00 28 00 00 00 00 0F 00 00 70 08 00 00 01 00 10 00 48 44 59 43 00 20 FD 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A8 5D 00 00 E8 03 00 00 18 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `16,588,800`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `-1113103021`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 7083`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `3840`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `16,588,800`
  * Extra Data: `00 00 00 00 A8 5D 00 00 E8 03 00 00 18 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3B 5D 06 00 00 00 00 00 3B 5D 06 00 00 00 00 00 53 65 A7 BD 53 65 A7 BD`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `3840` x `2160`
  * `.MinCroppingSize`: `3840` x `2160`
  * `.MaxCroppingSize`: `3840` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `3840` x `2160`
  * `.MaxOutputSize`: `3840` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 7083`
  * `.MaxFrameInterval`: `41 7083`
  * `.MinBitsPerSecond`: `-1,113,103,021`
  * `.MaxBitsPerSecond`: `-1,113,103,021`

#### Capability: 22

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 FD 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D8 BD 00 00 00 00 9A 5B 06 00 00 00 00 00 28 00 00 00 00 0F 00 00 70 08 00 00 01 00 10 00 48 44 59 43 00 20 FD 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 18 00 00 00 01 00 00 00 18 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `16,588,800`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `-1109917696`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `3840`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `16,588,800`
  * Extra Data: `00 00 00 00 18 00 00 00 01 00 00 00 18 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 9A 5B 06 00 00 00 00 00 9A 5B 06 00 00 00 00 00 00 00 D8 BD 00 00 D8 BD`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `3840` x `2160`
  * `.MinCroppingSize`: `3840` x `2160`
  * `.MaxCroppingSize`: `3840` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `3840` x `2160`
  * `.MaxOutputSize`: `3840` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 6666`
  * `.MaxFrameInterval`: `41 6666`
  * `.MinBitsPerSecond`: `-1,109,917,696`
  * `.MaxBitsPerSecond`: `-1,109,917,696`

#### Capability: 23

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 FD 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 C1 C5 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 00 0F 00 00 70 08 00 00 01 00 10 00 48 44 59 43 00 20 FD 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `16,588,800`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `-977207296`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `3840`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `16,588,800`
  * Extra Data: `00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 00 C1 C5 00 00 C1 C5`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `3840` x `2160`
  * `.MinCroppingSize`: `3840` x `2160`
  * `.MaxCroppingSize`: `3840` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `3840` x `2160`
  * `.MaxOutputSize`: `3840` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `-977,207,296`
  * `.MaxBitsPerSecond`: `-977,207,296`

#### Capability: 24

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 FD 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A2 40 11 ED 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 00 0F 00 00 70 08 00 00 01 00 10 00 48 44 59 43 00 20 FD 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B5 0B 00 00 64 00 00 00 1E 01 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `16,588,800`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `-317636446`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `3840`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `16,588,800`
  * Extra Data: `00 00 00 00 B5 0B 00 00 64 00 00 00 1E 01 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 A2 40 11 ED A2 40 11 ED`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `3840` x `2160`
  * `.MinCroppingSize`: `3840` x `2160`
  * `.MaxCroppingSize`: `3840` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `3840` x `2160`
  * `.MaxOutputSize`: `3840` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `-317,636,446`
  * `.MaxBitsPerSecond`: `-317,636,446`

#### Capability: 25

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 FD 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 4E ED 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 00 0F 00 00 70 08 00 00 01 00 10 00 48 44 59 43 00 20 FD 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 1E 00 00 00 01 00 00 00 1E 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `16,588,800`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `-313655296`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `3840`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `16,588,800`
  * Extra Data: `00 00 00 00 1E 00 00 00 01 00 00 00 1E 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 4E ED 00 00 4E ED`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `3840` x `2160`
  * `.MinCroppingSize`: `3840` x `2160`
  * `.MaxCroppingSize`: `3840` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `3840` x `2160`
  * `.MaxOutputSize`: `3840` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `-313,655,296`
  * `.MaxBitsPerSecond`: `-313,655,296`

#### Capability: 26

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 00 87 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 E8 13 26 65 00 00 00 00 3B 5D 06 00 00 00 00 00 28 00 00 00 00 08 00 00 70 08 00 00 01 00 10 00 48 44 59 43 00 00 87 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A8 5D 00 00 E8 03 00 00 18 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `8,847,360`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1696994280`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 7083`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `2048`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `8,847,360`
  * Extra Data: `00 00 00 00 A8 5D 00 00 E8 03 00 00 18 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 08 00 00 70 08 00 00 00 08 00 00 70 08 00 00 00 08 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 08 00 00 70 08 00 00 00 08 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3B 5D 06 00 00 00 00 00 3B 5D 06 00 00 00 00 00 E8 13 26 65 E8 13 26 65`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `2048` x `2160`
  * `.MinCroppingSize`: `2048` x `2160`
  * `.MaxCroppingSize`: `2048` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `2048` x `2160`
  * `.MaxOutputSize`: `2048` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 7083`
  * `.MaxFrameInterval`: `41 7083`
  * `.MinBitsPerSecond`: `1,696,994,280`
  * `.MaxBitsPerSecond`: `1,696,994,280`

#### Capability: 27

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 00 87 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 65 00 00 00 00 9A 5B 06 00 00 00 00 00 28 00 00 00 00 08 00 00 70 08 00 00 01 00 10 00 48 44 59 43 00 00 87 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 18 00 00 00 01 00 00 00 18 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `8,847,360`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1698693120`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `2048`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `8,847,360`
  * Extra Data: `00 00 00 00 18 00 00 00 01 00 00 00 18 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 08 00 00 70 08 00 00 00 08 00 00 70 08 00 00 00 08 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 08 00 00 70 08 00 00 00 08 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 9A 5B 06 00 00 00 00 00 9A 5B 06 00 00 00 00 00 00 00 40 65 00 00 40 65`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `2048` x `2160`
  * `.MinCroppingSize`: `2048` x `2160`
  * `.MaxCroppingSize`: `2048` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `2048` x `2160`
  * `.MaxOutputSize`: `2048` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 6666`
  * `.MaxFrameInterval`: `41 6666`
  * `.MinBitsPerSecond`: `1,698,693,120`
  * `.MaxBitsPerSecond`: `1,698,693,120`

#### Capability: 28

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 44 59 43 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 00 87 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 78 69 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 00 08 00 00 70 08 00 00 01 00 10 00 48 44 59 43 00 00 87 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
  * `.subtype`: `FourCC HDYC`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `8,847,360`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1769472000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `2048`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1129923656` `HDYC`
   * `.biSizeImage`: `8,847,360`
  * Extra Data: `00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 08 00 00 70 08 00 00 00 08 00 00 70 08 00 00 00 08 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 08 00 00 70 08 00 00 00 08 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 00 78 69 00 00 78 69`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `2048` x `2160`
  * `.MinCroppingSize`: `2048` x `2160`
  * `.MaxCroppingSize`: `2048` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `2048` x `2160`
  * `.MaxOutputSize`: `2048` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `1,769,472,000`
  * `.MaxBitsPerSecond`: `1,769,472,000`

#### Capability: 29

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 3D 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 E8 68 80 0C 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E6 01 00 00 01 00 14 00 76 32 31 30 00 3D 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B5 0B 00 00 64 00 00 00 1E 01 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `933,120`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `209742056`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `486`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `933,120`
  * Extra Data: `00 00 00 00 B5 0B 00 00 64 00 00 00 1E 01 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E6 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E6 01 00 00 D0 02 00 00 E6 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 E8 68 80 0C E8 68 80 0C`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `486`
  * `.MinCroppingSize`: `720` x `486`
  * `.MaxCroppingSize`: `720` x `486`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `720` x `486`
  * `.MaxOutputSize`: `720` x `486`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `209,742,056`
  * `.MaxBitsPerSecond`: `209,742,056`

#### Capability: 30

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 E0 10 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 10 5C 0C 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 D0 02 00 00 40 02 00 00 01 00 14 00 76 32 31 30 00 E0 10 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,105,920`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `207360000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `1,105,920`
  * Extra Data: `00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 40 02 00 00 D0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 10 5C 0C 00 10 5C 0C`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `576`
  * `.MinCroppingSize`: `720` x `576`
  * `.MaxCroppingSize`: `720` x `576`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `720` x `576`
  * `.MaxOutputSize`: `720` x `576`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `207,360,000`
  * `.MaxBitsPerSecond`: `207,360,000`

#### Capability: 31

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 54 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A9 4F 44 3B 00 00 00 00 3B 5D 06 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 14 00 76 32 31 30 00 60 54 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A8 5D 00 00 E8 03 00 00 18 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `5,529,600`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `994332585`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 7083`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `5,529,600`
  * Extra Data: `00 00 00 00 A8 5D 00 00 E8 03 00 00 18 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3B 5D 06 00 00 00 00 00 3B 5D 06 00 00 00 00 00 A9 4F 44 3B A9 4F 44 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 7083`
  * `.MaxFrameInterval`: `41 7083`
  * `.MinBitsPerSecond`: `994,332,585`
  * `.MaxBitsPerSecond`: `994,332,585`

#### Capability: 32

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 54 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 53 3B 00 00 00 00 9A 5B 06 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 14 00 76 32 31 30 00 60 54 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 18 00 00 00 01 00 00 00 18 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `5,529,600`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `995328000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `5,529,600`
  * Extra Data: `00 00 00 00 18 00 00 00 01 00 00 00 18 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 9A 5B 06 00 00 00 00 00 9A 5B 06 00 00 00 00 00 00 80 53 3B 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 6666`
  * `.MaxFrameInterval`: `41 6666`
  * `.MinBitsPerSecond`: `995,328,000`
  * `.MaxBitsPerSecond`: `995,328,000`

#### Capability: 33

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 54 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 50 CC 3D 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 14 00 76 32 31 30 00 60 54 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `5,529,600`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1036800000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `5,529,600`
  * Extra Data: `00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 50 CC 3D 00 50 CC 3D`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `1,036,800,000`
  * `.MaxBitsPerSecond`: `1,036,800,000`

#### Capability: 34

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 54 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 32 64 15 4A 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 14 00 76 32 31 30 00 60 54 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B5 0B 00 00 64 00 00 00 1E 01 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `5,529,600`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1242915890`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `5,529,600`
  * Extra Data: `00 00 00 00 B5 0B 00 00 64 00 00 00 1E 01 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 32 64 15 4A 32 64 15 4A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `1,242,915,890`
  * `.MaxBitsPerSecond`: `1,242,915,890`

#### Capability: 35

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 54 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 60 28 4A 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 14 00 76 32 31 30 00 60 54 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 1E 00 00 00 01 00 00 00 1E 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `5,529,600`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1244160000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `5,529,600`
  * Extra Data: `00 00 00 00 1E 00 00 00 01 00 00 00 1E 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 60 28 4A 00 60 28 4A`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `1,244,160,000`
  * `.MaxBitsPerSecond`: `1,244,160,000`

#### Capability: 36

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 54 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A0 98 7B 00 00 00 00 40 0D 03 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 14 00 76 32 31 30 00 60 54 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 32 00 00 00 01 00 00 00 32 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `5,529,600`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `2073600000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `20 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `5,529,600`
  * Extra Data: `00 00 00 00 32 00 00 00 01 00 00 00 32 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 0D 03 00 00 00 00 00 40 0D 03 00 00 00 00 00 00 A0 98 7B 00 A0 98 7B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `20 0000`
  * `.MaxFrameInterval`: `20 0000`
  * `.MinBitsPerSecond`: `2,073,600,000`
  * `.MaxBitsPerSecond`: `2,073,600,000`

#### Capability: 37

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 54 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 65 C8 2A 94 00 00 00 00 B1 8B 02 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 14 00 76 32 31 30 00 60 54 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 6A 17 00 00 64 00 00 00 3C 01 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `5,529,600`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `-1809135515`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6833`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `5,529,600`
  * Extra Data: `00 00 00 00 6A 17 00 00 64 00 00 00 3C 01 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B1 8B 02 00 00 00 00 00 B1 8B 02 00 00 00 00 00 65 C8 2A 94 65 C8 2A 94`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6833`
  * `.MaxFrameInterval`: `16 6833`
  * `.MinBitsPerSecond`: `-1,809,135,515`
  * `.MaxBitsPerSecond`: `-1,809,135,515`

#### Capability: 38

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 54 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 C0 50 94 00 00 00 00 0A 8B 02 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 14 00 76 32 31 30 00 60 54 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3C 00 00 00 01 00 00 00 3C 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `5,529,600`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `-1806647296`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `5,529,600`
  * Extra Data: `00 00 00 00 3C 00 00 00 01 00 00 00 3C 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0A 8B 02 00 00 00 00 00 0A 8B 02 00 00 00 00 00 00 C0 50 94 00 C0 50 94`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `1080`
  * `.MinCroppingSize`: `1920` x `1080`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `1080`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6666`
  * `.MaxFrameInterval`: `16 6666`
  * `.MinBitsPerSecond`: `-1,806,647,296`
  * `.MaxBitsPerSecond`: `-1,806,647,296`

#### Capability: 39

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F8 25 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 EE 36 00 00 00 00 40 0D 03 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 14 00 76 32 31 30 00 F8 25 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 32 00 00 00 01 00 00 00 32 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2,488,320`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `921600000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `20 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `2,488,320`
  * Extra Data: `00 00 00 00 32 00 00 00 01 00 00 00 32 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 0D 03 00 00 00 00 00 40 0D 03 00 00 00 00 00 00 80 EE 36 00 80 EE 36`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `20 0000`
  * `.MaxFrameInterval`: `20 0000`
  * `.MinBitsPerSecond`: `921,600,000`
  * `.MaxBitsPerSecond`: `921,600,000`

#### Capability: 40

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F8 25 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2D 20 DA 41 00 00 00 00 B1 8B 02 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 14 00 76 32 31 30 00 F8 25 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 6A 17 00 00 64 00 00 00 3C 01 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2,488,320`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1104814125`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6833`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `2,488,320`
  * Extra Data: `00 00 00 00 6A 17 00 00 64 00 00 00 3C 01 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B1 8B 02 00 00 00 00 00 B1 8B 02 00 00 00 00 00 2D 20 DA 41 2D 20 DA 41`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6833`
  * `.MaxFrameInterval`: `16 6833`
  * `.MinBitsPerSecond`: `1,104,814,125`
  * `.MaxBitsPerSecond`: `1,104,814,125`

#### Capability: 41

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F8 25 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 EB 41 00 00 00 00 0A 8B 02 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 14 00 76 32 31 30 00 F8 25 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3C 00 00 00 01 00 00 00 3C 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2,488,320`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1105920000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `2,488,320`
  * Extra Data: `00 00 00 00 3C 00 00 00 01 00 00 00 3C 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0A 8B 02 00 00 00 00 00 0A 8B 02 00 00 00 00 00 00 00 EB 41 00 00 EB 41`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `720`
  * `.MinCroppingSize`: `1280` x `720`
  * `.MaxCroppingSize`: `1280` x `720`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1280` x `720`
  * `.MaxOutputSize`: `1280` x `720`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6666`
  * `.MaxFrameInterval`: `16 6666`
  * `.MinBitsPerSecond`: `1,105,920,000`
  * `.MaxBitsPerSecond`: `1,105,920,000`

#### Capability: 42

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 C0 A8 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 53 9F 88 76 00 00 00 00 3B 5D 06 00 00 00 00 00 28 00 00 00 80 07 00 00 70 08 00 00 01 00 14 00 76 32 31 30 00 C0 A8 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A8 5D 00 00 E8 03 00 00 18 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `11,059,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1988665171`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 7083`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `11,059,200`
  * Extra Data: `00 00 00 00 A8 5D 00 00 E8 03 00 00 18 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3B 5D 06 00 00 00 00 00 3B 5D 06 00 00 00 00 00 53 9F 88 76 53 9F 88 76`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `2160`
  * `.MinCroppingSize`: `1920` x `2160`
  * `.MaxCroppingSize`: `1920` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `2160`
  * `.MaxOutputSize`: `1920` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 7083`
  * `.MaxFrameInterval`: `41 7083`
  * `.MinBitsPerSecond`: `1,988,665,171`
  * `.MaxBitsPerSecond`: `1,988,665,171`

#### Capability: 43

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 C0 A8 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A7 76 00 00 00 00 9A 5B 06 00 00 00 00 00 28 00 00 00 80 07 00 00 70 08 00 00 01 00 14 00 76 32 31 30 00 C0 A8 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 18 00 00 00 01 00 00 00 18 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `11,059,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1990656000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `11,059,200`
  * Extra Data: `00 00 00 00 18 00 00 00 01 00 00 00 18 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 9A 5B 06 00 00 00 00 00 9A 5B 06 00 00 00 00 00 00 00 A7 76 00 00 A7 76`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `2160`
  * `.MinCroppingSize`: `1920` x `2160`
  * `.MaxCroppingSize`: `1920` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `2160`
  * `.MaxOutputSize`: `1920` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 6666`
  * `.MaxFrameInterval`: `41 6666`
  * `.MinBitsPerSecond`: `1,990,656,000`
  * `.MaxBitsPerSecond`: `1,990,656,000`

#### Capability: 44

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 C0 A8 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A0 98 7B 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 80 07 00 00 70 08 00 00 01 00 14 00 76 32 31 30 00 C0 A8 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `11,059,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `2073600000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `11,059,200`
  * Extra Data: `00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 A0 98 7B 00 A0 98 7B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `2160`
  * `.MinCroppingSize`: `1920` x `2160`
  * `.MaxCroppingSize`: `1920` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `2160`
  * `.MaxOutputSize`: `1920` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `2,073,600,000`
  * `.MaxBitsPerSecond`: `2,073,600,000`

#### Capability: 45

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 C0 A8 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 65 C8 2A 94 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 07 00 00 70 08 00 00 01 00 14 00 76 32 31 30 00 C0 A8 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B5 0B 00 00 64 00 00 00 1E 01 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `11,059,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `-1809135515`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `11,059,200`
  * Extra Data: `00 00 00 00 B5 0B 00 00 64 00 00 00 1E 01 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 65 C8 2A 94 65 C8 2A 94`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `2160`
  * `.MinCroppingSize`: `1920` x `2160`
  * `.MaxCroppingSize`: `1920` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `2160`
  * `.MaxOutputSize`: `1920` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `-1,809,135,515`
  * `.MaxBitsPerSecond`: `-1,809,135,515`

#### Capability: 46

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 C0 A8 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 C0 50 94 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 07 00 00 70 08 00 00 01 00 14 00 76 32 31 30 00 C0 A8 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 1E 00 00 00 01 00 00 00 1E 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `11,059,200`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `-1806647296`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `11,059,200`
  * Extra Data: `00 00 00 00 1E 00 00 00 01 00 00 00 1E 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 70 08 00 00 80 07 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 C0 50 94 00 C0 50 94`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1920` x `2160`
  * `.MinCroppingSize`: `1920` x `2160`
  * `.MaxCroppingSize`: `1920` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1920` x `2160`
  * `.MaxOutputSize`: `1920` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `-1,806,647,296`
  * `.MaxBitsPerSecond`: `-1,806,647,296`

#### Capability: 47

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F0 4B 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 DD 6D 00 00 00 00 40 0D 03 00 00 00 00 00 28 00 00 00 00 05 00 00 A0 05 00 00 01 00 14 00 76 32 31 30 00 F0 4B 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 32 00 00 00 01 00 00 00 32 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,976,640`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `1843200000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `20 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `1440`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `4,976,640`
  * Extra Data: `00 00 00 00 32 00 00 00 01 00 00 00 32 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 A0 05 00 00 00 05 00 00 A0 05 00 00 00 05 00 00 A0 05 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 05 00 00 A0 05 00 00 00 05 00 00 A0 05 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 0D 03 00 00 00 00 00 40 0D 03 00 00 00 00 00 00 00 DD 6D 00 00 DD 6D`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `1440`
  * `.MinCroppingSize`: `1280` x `1440`
  * `.MaxCroppingSize`: `1280` x `1440`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1280` x `1440`
  * `.MaxOutputSize`: `1280` x `1440`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `20 0000`
  * `.MaxFrameInterval`: `20 0000`
  * `.MinBitsPerSecond`: `1,843,200,000`
  * `.MaxBitsPerSecond`: `1,843,200,000`

#### Capability: 48

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F0 4B 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 5A 40 B4 83 00 00 00 00 B1 8B 02 00 00 00 00 00 28 00 00 00 00 05 00 00 A0 05 00 00 01 00 14 00 76 32 31 30 00 F0 4B 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 6A 17 00 00 64 00 00 00 3C 01 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,976,640`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `-2085339046`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6833`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `1440`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `4,976,640`
  * Extra Data: `00 00 00 00 6A 17 00 00 64 00 00 00 3C 01 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 A0 05 00 00 00 05 00 00 A0 05 00 00 00 05 00 00 A0 05 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 05 00 00 A0 05 00 00 00 05 00 00 A0 05 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B1 8B 02 00 00 00 00 00 B1 8B 02 00 00 00 00 00 5A 40 B4 83 5A 40 B4 83`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `1440`
  * `.MinCroppingSize`: `1280` x `1440`
  * `.MaxCroppingSize`: `1280` x `1440`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1280` x `1440`
  * `.MaxOutputSize`: `1280` x `1440`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6833`
  * `.MaxFrameInterval`: `16 6833`
  * `.MinBitsPerSecond`: `-2,085,339,046`
  * `.MaxBitsPerSecond`: `-2,085,339,046`

#### Capability: 49

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F0 4B 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D6 83 00 00 00 00 0A 8B 02 00 00 00 00 00 28 00 00 00 00 05 00 00 A0 05 00 00 01 00 14 00 76 32 31 30 00 F0 4B 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3C 00 00 00 01 00 00 00 3C 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4,976,640`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `-2083127296`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `16 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `1440`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `4,976,640`
  * Extra Data: `00 00 00 00 3C 00 00 00 01 00 00 00 3C 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 A0 05 00 00 00 05 00 00 A0 05 00 00 00 05 00 00 A0 05 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 05 00 00 A0 05 00 00 00 05 00 00 A0 05 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0A 8B 02 00 00 00 00 00 0A 8B 02 00 00 00 00 00 00 00 D6 83 00 00 D6 83`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `1440`
  * `.MinCroppingSize`: `1280` x `1440`
  * `.MaxCroppingSize`: `1280` x `1440`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `1280` x `1440`
  * `.MaxOutputSize`: `1280` x `1440`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `16 6666`
  * `.MaxFrameInterval`: `16 6666`
  * `.MinBitsPerSecond`: `-2,083,127,296`
  * `.MaxBitsPerSecond`: `-2,083,127,296`

#### Capability: 50

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 80 51 01 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A7 3E 11 ED 00 00 00 00 3B 5D 06 00 00 00 00 00 28 00 00 00 00 0F 00 00 70 08 00 00 01 00 14 00 76 32 31 30 00 80 51 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A8 5D 00 00 E8 03 00 00 18 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `22,118,400`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `-317636953`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 7083`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `3840`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `22,118,400`
  * Extra Data: `00 00 00 00 A8 5D 00 00 E8 03 00 00 18 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3B 5D 06 00 00 00 00 00 3B 5D 06 00 00 00 00 00 A7 3E 11 ED A7 3E 11 ED`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `3840` x `2160`
  * `.MinCroppingSize`: `3840` x `2160`
  * `.MaxCroppingSize`: `3840` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `3840` x `2160`
  * `.MaxOutputSize`: `3840` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 7083`
  * `.MaxFrameInterval`: `41 7083`
  * `.MinBitsPerSecond`: `-317,636,953`
  * `.MaxBitsPerSecond`: `-317,636,953`

#### Capability: 51

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 80 51 01 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 4E ED 00 00 00 00 9A 5B 06 00 00 00 00 00 28 00 00 00 00 0F 00 00 70 08 00 00 01 00 14 00 76 32 31 30 00 80 51 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 18 00 00 00 01 00 00 00 18 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `22,118,400`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `-313655296`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `3840`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `22,118,400`
  * Extra Data: `00 00 00 00 18 00 00 00 01 00 00 00 18 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 9A 5B 06 00 00 00 00 00 9A 5B 06 00 00 00 00 00 00 00 4E ED 00 00 4E ED`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `3840` x `2160`
  * `.MinCroppingSize`: `3840` x `2160`
  * `.MaxCroppingSize`: `3840` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `3840` x `2160`
  * `.MaxOutputSize`: `3840` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 6666`
  * `.MaxFrameInterval`: `41 6666`
  * `.MinBitsPerSecond`: `-313,655,296`
  * `.MaxBitsPerSecond`: `-313,655,296`

#### Capability: 52

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 80 51 01 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 31 F7 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 00 0F 00 00 70 08 00 00 01 00 14 00 76 32 31 30 00 80 51 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `22,118,400`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `-147767296`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `3840`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `22,118,400`
  * Extra Data: `00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 40 31 F7 00 40 31 F7`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `3840` x `2160`
  * `.MinCroppingSize`: `3840` x `2160`
  * `.MaxCroppingSize`: `3840` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `3840` x `2160`
  * `.MaxOutputSize`: `3840` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `-147,767,296`
  * `.MaxBitsPerSecond`: `-147,767,296`

#### Capability: 53

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 80 51 01 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 CA 90 55 28 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 00 0F 00 00 70 08 00 00 01 00 14 00 76 32 31 30 00 80 51 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 B5 0B 00 00 64 00 00 00 1E 01 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `22,118,400`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `676696266`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `3840`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `22,118,400`
  * Extra Data: `00 00 00 00 B5 0B 00 00 64 00 00 00 1E 01 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 CA 90 55 28 CA 90 55 28`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `3840` x `2160`
  * `.MinCroppingSize`: `3840` x `2160`
  * `.MaxCroppingSize`: `3840` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `3840` x `2160`
  * `.MaxOutputSize`: `3840` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `676,696,266`
  * `.MaxBitsPerSecond`: `676,696,266`

#### Capability: 54

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 80 51 01 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 A1 28 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 00 0F 00 00 70 08 00 00 01 00 14 00 76 32 31 30 00 80 51 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 1E 00 00 00 01 00 00 00 1E 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `22,118,400`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `681672704`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `3840`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `22,118,400`
  * Extra Data: `00 00 00 00 1E 00 00 00 01 00 00 00 1E 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 0F 00 00 70 08 00 00 00 0F 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 80 A1 28 00 80 A1 28`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `3840` x `2160`
  * `.MinCroppingSize`: `3840` x `2160`
  * `.MaxCroppingSize`: `3840` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `3840` x `2160`
  * `.MaxOutputSize`: `3840` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `681,672,704`
  * `.MaxBitsPerSecond`: `681,672,704`

#### Capability: 55

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 68 B5 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 E2 98 6F 7E 00 00 00 00 3B 5D 06 00 00 00 00 00 28 00 00 00 00 08 00 00 70 08 00 00 01 00 14 00 76 32 31 30 00 68 B5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A8 5D 00 00 E8 03 00 00 18 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `11,888,640`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `2121242850`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 7083`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `2048`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `11,888,640`
  * Extra Data: `00 00 00 00 A8 5D 00 00 E8 03 00 00 18 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 08 00 00 70 08 00 00 00 08 00 00 70 08 00 00 00 08 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 08 00 00 70 08 00 00 00 08 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 3B 5D 06 00 00 00 00 00 3B 5D 06 00 00 00 00 00 E2 98 6F 7E E2 98 6F 7E`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `2048` x `2160`
  * `.MinCroppingSize`: `2048` x `2160`
  * `.MaxCroppingSize`: `2048` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `2048` x `2160`
  * `.MaxOutputSize`: `2048` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 7083`
  * `.MaxFrameInterval`: `41 7083`
  * `.MinBitsPerSecond`: `2,121,242,850`
  * `.MaxBitsPerSecond`: `2,121,242,850`

#### Capability: 56

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 68 B5 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 60 2F 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 90 7E 00 00 00 00 9A 5B 06 00 00 00 00 00 28 00 00 00 00 08 00 00 70 08 00 00 01 00 14 00 76 32 31 30 00 68 B5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 18 00 00 00 01 00 00 00 18 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `11,888,640`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `2123366400`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `41 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `2048`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `11,888,640`
  * Extra Data: `00 00 00 00 18 00 00 00 01 00 00 00 18 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 08 00 00 70 08 00 00 00 08 00 00 70 08 00 00 00 08 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 08 00 00 70 08 00 00 00 08 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 9A 5B 06 00 00 00 00 00 9A 5B 06 00 00 00 00 00 00 00 90 7E 00 00 90 7E`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `2048` x `2160`
  * `.MinCroppingSize`: `2048` x `2160`
  * `.MaxCroppingSize`: `2048` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `2048` x `2160`
  * `.MaxOutputSize`: `2048` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `41 6666`
  * `.MaxFrameInterval`: `41 6666`
  * `.MinBitsPerSecond`: `2,123,366,400`
  * `.MaxBitsPerSecond`: `2,123,366,400`

#### Capability: 57

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 76 32 31 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 68 B5 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 00 00 00 F0 2E 58 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 D6 83 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 00 08 00 00 70 08 00 00 01 00 14 00 76 32 31 30 00 68 B5 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
  * `.subtype`: `FourCC v210`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `11,888,640`
  * `.cbFormat`: `104`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `-2083127296`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `2048`
   * `.biHeight`: `2160`
   * `.biPlanes`: `1`
   * `.biBitCount`: `20`
   * `.biCompression`: `808530550` `v210`
   * `.biSizeImage`: `11,888,640`
  * Extra Data: `00 00 00 00 19 00 00 00 01 00 00 00 19 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 08 00 00 70 08 00 00 00 08 00 00 70 08 00 00 00 08 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 08 00 00 70 08 00 00 00 08 00 00 70 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 80 1A 06 00 00 00 00 00 00 00 D6 83 00 00 D6 83`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `2048` x `2160`
  * `.MinCroppingSize`: `2048` x `2160`
  * `.MaxCroppingSize`: `2048` x `2160`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `2048` x `2160`
  * `.MaxOutputSize`: `2048` x `2160`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `40 0000`
  * `.MaxFrameInterval`: `40 0000`
  * `.MinBitsPerSecond`: `-2,083,127,296`
  * `.MaxBitsPerSecond`: `-2,083,127,296`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

### Pin: ~VANC

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4284-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_VBI`
 * Capabilities:
  * Count: `1`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `0` x `0`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `0` x `0`
  * `.MaxOutputSize`: `0` x `0`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `0`
  * `.MaxFrameInterval`: `0`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMStreamConfig`
  * `IAMStreamControl`

### Pin: ~Timecode

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C428B-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_TIMECODE`
 * Capabilities:
  * Count: `2`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `E3 DE 82 04 17 78 CF 11 8A 03 00 AA 00 6E CB 65 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 00 00 00 00 00 00 00 18 00 00 00 D6 17 64 0F 18 C3 D0 11 A4 3F 00 A0 C9 22 31 96 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.majortype`: `{0482DEE3-7817-11CF-8A03-00AA006ECB65}`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `24`
  * `.cbFormat`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `0` x `0`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `0` x `0`
  * `.MaxOutputSize`: `0` x `0`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `0`
  * `.MaxFrameInterval`: `0`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `74 78 74 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 00 00 00 00 00 00 00 0C 00 00 00 D6 17 64 0F 18 C3 D0 11 A4 3F 00 A0 C9 22 31 96 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.majortype`: `MEDIATYPE_Text`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `12`
  * `.cbFormat`: `0`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `0` x `0`
  * `.MinCroppingSize`: `0` x `0`
  * `.MaxCroppingSize`: `0` x `0`
  * `.CropGranularityX`: `0`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `0` x `0`
  * `.MaxOutputSize`: `0` x `0`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `0`
  * `.MaxFrameInterval`: `0`
  * `.MinBitsPerSecond`: `0`
  * `.MaxBitsPerSecond`: `0`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMStreamConfig`
  * `IAMStreamControl`

## Device: Matrox FlexTunnel Input

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{A1A7C847-2768-4925-AD40-6C45273C6B8A}`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IReferenceClock`

Property Pages:

  * `{F105E712-3489-410B-A66C-C80A9CF78C93}` - Matrox FlexTunnel Input Filter Property Page

### Pin: Matrox Video Pin

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `8`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 10 57 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,228,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1,228,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 E0 01 00 00 50 00 00 00 3C 00 00 00 80 02 00 00 E0 01 00 00 50 00 00 00 3C 00 00 00 00 00 00 00 00 00 00 00 50 00 00 00 3C 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 50 00 63 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 00 5A 00 00 00 00 F9 15`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `640` x `480`
  * `.MinCroppingSize`: `80` x `60`
  * `.MaxCroppingSize`: `640` x `480`
  * `.CropGranularityX`: `80`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `80` x `60`
  * `.MaxOutputSize`: `640` x `480`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `23,040`
  * `.MaxBitsPerSecond`: `368,640,000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 10 57 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,228,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1,228,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 E0 01 00 00 50 00 00 00 3C 00 00 00 80 02 00 00 E0 01 00 00 50 00 00 00 3C 00 00 00 00 00 00 00 00 00 00 00 50 00 00 00 3C 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 50 00 63 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 00 5A 00 00 00 00 F9 15`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `640` x `480`
  * `.MinCroppingSize`: `80` x `60`
  * `.MaxCroppingSize`: `640` x `480`
  * `.CropGranularityX`: `80`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `80` x `60`
  * `.MaxOutputSize`: `640` x `480`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `23,040`
  * `.MaxBitsPerSecond`: `368,640,000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 10 57 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,228,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1,228,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 E0 01 00 00 50 00 00 00 3C 00 00 00 80 02 00 00 E0 01 00 00 50 00 00 00 3C 00 00 00 00 00 00 00 00 00 00 00 50 00 00 00 3C 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 50 00 63 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 00 5A 00 00 00 00 F9 15`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `640` x `480`
  * `.MinCroppingSize`: `80` x `60`
  * `.MaxCroppingSize`: `640` x `480`
  * `.CropGranularityX`: `80`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `80` x `60`
  * `.MaxOutputSize`: `640` x `480`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `23,040`
  * `.MaxBitsPerSecond`: `368,640,000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 10 57 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,228,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1,228,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 E0 01 00 00 50 00 00 00 3C 00 00 00 80 02 00 00 E0 01 00 00 50 00 00 00 3C 00 00 00 00 00 00 00 00 00 00 00 50 00 00 00 3C 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 50 00 63 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 00 5A 00 00 00 00 F9 15`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `640` x `480`
  * `.MinCroppingSize`: `80` x `60`
  * `.MaxCroppingSize`: `640` x `480`
  * `.CropGranularityX`: `80`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `80` x `60`
  * `.MaxOutputSize`: `640` x `480`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `23,040`
  * `.MaxBitsPerSecond`: `368,640,000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 10 57 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,228,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1,228,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 E0 01 00 00 50 00 00 00 3C 00 00 00 80 02 00 00 E0 01 00 00 50 00 00 00 3C 00 00 00 00 00 00 00 00 00 00 00 50 00 00 00 3C 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 50 00 63 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 00 5A 00 00 00 00 F9 15`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `640` x `480`
  * `.MinCroppingSize`: `80` x `60`
  * `.MaxCroppingSize`: `640` x `480`
  * `.CropGranularityX`: `80`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `80` x `60`
  * `.MaxOutputSize`: `640` x `480`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `23,040`
  * `.MaxBitsPerSecond`: `368,640,000`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 10 57 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,228,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1,228,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 E0 01 00 00 50 00 00 00 3C 00 00 00 80 02 00 00 E0 01 00 00 50 00 00 00 3C 00 00 00 00 00 00 00 00 00 00 00 50 00 00 00 3C 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 50 00 63 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 00 5A 00 00 00 00 F9 15`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `640` x `480`
  * `.MinCroppingSize`: `80` x `60`
  * `.MaxCroppingSize`: `640` x `480`
  * `.CropGranularityX`: `80`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `80` x `60`
  * `.MaxOutputSize`: `640` x `480`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `23,040`
  * `.MaxBitsPerSecond`: `368,640,000`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 10 57 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,228,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1,228,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 E0 01 00 00 50 00 00 00 3C 00 00 00 80 02 00 00 E0 01 00 00 50 00 00 00 3C 00 00 00 00 00 00 00 00 00 00 00 50 00 00 00 3C 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 50 00 63 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 00 5A 00 00 00 00 F9 15`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `640` x `480`
  * `.MinCroppingSize`: `80` x `60`
  * `.MaxCroppingSize`: `640` x `480`
  * `.CropGranularityX`: `80`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `80` x `60`
  * `.MaxOutputSize`: `640` x `480`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `23,040`
  * `.MaxBitsPerSecond`: `368,640,000`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 10 57 56 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1,228,800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1,228,800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 E0 01 00 00 50 00 00 00 3C 00 00 00 80 02 00 00 E0 01 00 00 50 00 00 00 3C 00 00 00 00 00 00 00 00 00 00 00 50 00 00 00 3C 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 50 00 63 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 00 5A 00 00 00 00 F9 15`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `640` x `480`
  * `.MinCroppingSize`: `80` x `60`
  * `.MaxCroppingSize`: `640` x `480`
  * `.CropGranularityX`: `80`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `80` x `60`
  * `.MaxOutputSize`: `640` x `480`
  * `.OutputGranularityX`: `0`
  * `.OutputGranularityY`: `0`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `23,040`
  * `.MaxBitsPerSecond`: `368,640,000`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMStreamConfig`

### Pin: Matrox Audio Pin

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `1`
  * Structure Size: `52` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 58 66 57 00`
  * Format Data: `01 00 02 00 44 AC 00 00 10 B1 02 00 04 00 10 00 00 00`
  * `.majortype`: `MEDIATYPE_Audio`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `176400`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * Unknown Capabilities:
  * Type: `{05589F81-C356-11CE-BF01-00AA0055595A}`
  * Data: `81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 02 00 00 00 02 00 00 00 02 00 00 00 10 00 00 00 10 00 00 00 10 00 00 00 44 AC 00 00 44 AC 00 00 44 AC 00 00`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`

### Pin: Matrox Audio Volume Pin

 * Direction: `PINDIR_INPUT`
Interfaces:

  * `IQualityControl`

# Audio

## Device: Desktop Microphone (Microsoft® 

 * Moniker Display Name: `@device:cm:{33D9A762-90C8-11D0-BD43-00A0C911CE86}\Desktop Microphone (Microsoft® `

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{2CA8CA52-3C3F-11D2-B73D-00C04FB6BD3D}` - `CLSID_AudioInputMixerProperties`, AudioInputMixer Property Page

### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `23`
  * Structure Size: `52` (expected `52`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 02 00 44 AC 00 00 10 B1 02 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `176400`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 02 00 44 AC 00 00 10 B1 02 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `176400`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 01 00 44 AC 00 00 88 58 01 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `88200`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 02 00 00 7D 00 00 00 F4 01 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `32000`
   * `.nAvgBytesPerSec: `128000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 01 00 00 7D 00 00 00 FA 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `32000`
   * `.nAvgBytesPerSec: `64000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 02 00 22 56 00 00 88 58 01 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `88200`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 01 00 22 56 00 00 44 AC 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 02 00 11 2B 00 00 44 AC 00 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 8

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 01 00 11 2B 00 00 22 56 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `22050`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 9

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 02 00 40 1F 00 00 00 7D 00 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `32000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 10

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 01 00 40 1F 00 00 80 3E 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `16000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 11

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 02 00 44 AC 00 00 88 58 01 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `88200`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 12

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 01 00 44 AC 00 00 44 AC 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 13

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 02 00 22 56 00 00 44 AC 00 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 14

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 01 00 22 56 00 00 22 56 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `22050`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 15

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 02 00 11 2B 00 00 22 56 00 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `22050`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 16

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 01 00 11 2B 00 00 11 2B 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `11025`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 17

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 02 00 40 1F 00 00 80 3E 00 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `16000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 18

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 01 00 40 1F 00 00 40 1F 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `8000`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 19

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 02 00 80 BB 00 00 00 EE 02 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `192000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 20

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 01 00 80 BB 00 00 00 77 01 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `96000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 21

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 02 00 00 77 01 00 00 DC 05 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `96000`
   * `.nAvgBytesPerSec: `384000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 22

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 40 5F 59 00`
  * Format Data: `01 00 01 00 00 77 01 00 00 EE 02 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `96000`
   * `.nAvgBytesPerSec: `192000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

### Pin: Master Volume

 * Direction: `PINDIR_INPUT`
Interfaces:

  * `IQualityControl`

## Device: Decklink Audio Capture

 * Moniker Display Name: `@device:sw:{33D9A762-90C8-11D0-BD43-00A0C911CE86}\{AAA22F7E-5AA0-49D9-8C8D-B52B1AA92EB7}`
 * DeckLink IO Features: `0x03388CC0`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IReferenceClock`
  * `IAMDroppedFrames`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{8869832C-FDE3-468E-B0D2-53BF2D59C17A}` - Decklink Audio Capture Properties2
  * `{ED4418E7-582D-4759-AE07-8CA7F771427F}` - Decklink Audio Capture Properties

### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `8`
  * Structure Size: `52` (expected `52`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 48 77 5C 00`
  * Format Data: `01 00 01 00 80 BB 00 00 00 77 01 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `96000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * Unknown Capabilities:
  * Type: `{05589F81-C356-11CE-BF01-00AA0055595A}`
  * Data: `81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 01 00 00 00 01 00 00 00 00 00 00 00 10 00 00 00 10 00 00 00 00 00 00 00 80 BB 00 00 80 BB 00 00 00 00 00 00`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 28 77 5C 00`
  * Format Data: `01 00 02 00 80 BB 00 00 00 EE 02 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `192000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * Unknown Capabilities:
  * Type: `{05589F81-C356-11CE-BF01-00AA0055595A}`
  * Data: `81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 02 00 00 00 02 00 00 00 00 00 00 00 10 00 00 00 10 00 00 00 00 00 00 00 80 BB 00 00 80 BB 00 00 00 00 00 00`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 08 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 48 77 5C 00`
  * Format Data: `01 00 04 00 80 BB 00 00 00 DC 05 00 08 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `8`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `4`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `384000`
   * `.nBlockAlign`: `8`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * Unknown Capabilities:
  * Type: `{05589F81-C356-11CE-BF01-00AA0055595A}`
  * Data: `81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 04 00 00 00 04 00 00 00 00 00 00 00 10 00 00 00 10 00 00 00 00 00 00 00 80 BB 00 00 80 BB 00 00 00 00 00 00`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 0C 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 28 77 5C 00`
  * Format Data: `01 00 06 00 80 BB 00 00 00 CA 08 00 0C 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `12`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `6`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `576000`
   * `.nBlockAlign`: `12`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * Unknown Capabilities:
  * Type: `{05589F81-C356-11CE-BF01-00AA0055595A}`
  * Data: `81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 06 00 00 00 06 00 00 00 00 00 00 00 10 00 00 00 10 00 00 00 00 00 00 00 80 BB 00 00 80 BB 00 00 00 00 00 00`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 10 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 48 77 5C 00`
  * Format Data: `01 00 08 00 80 BB 00 00 00 B8 0B 00 10 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `16`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `8`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `768000`
   * `.nBlockAlign`: `16`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * Unknown Capabilities:
  * Type: `{05589F81-C356-11CE-BF01-00AA0055595A}`
  * Data: `81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 08 00 00 00 08 00 00 00 00 00 00 00 10 00 00 00 10 00 00 00 00 00 00 00 80 BB 00 00 80 BB 00 00 00 00 00 00`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 14 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 28 77 5C 00`
  * Format Data: `01 00 0A 00 80 BB 00 00 00 A6 0E 00 14 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `20`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `10`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `960000`
   * `.nBlockAlign`: `20`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * Unknown Capabilities:
  * Type: `{05589F81-C356-11CE-BF01-00AA0055595A}`
  * Data: `81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 0A 00 00 00 0A 00 00 00 00 00 00 00 10 00 00 00 10 00 00 00 00 00 00 00 80 BB 00 00 80 BB 00 00 00 00 00 00`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 18 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 48 77 5C 00`
  * Format Data: `01 00 0C 00 80 BB 00 00 00 94 11 00 18 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `24`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `12`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `1152000`
   * `.nBlockAlign`: `24`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * Unknown Capabilities:
  * Type: `{05589F81-C356-11CE-BF01-00AA0055595A}`
  * Data: `81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 0C 00 00 00 0C 00 00 00 00 00 00 00 10 00 00 00 10 00 00 00 00 00 00 00 80 BB 00 00 80 BB 00 00 00 00 00 00`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 20 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 28 77 5C 00`
  * Format Data: `01 00 10 00 80 BB 00 00 00 70 17 00 20 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `32`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `16`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `1536000`
   * `.nBlockAlign`: `32`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * Unknown Capabilities:
  * Type: `{05589F81-C356-11CE-BF01-00AA0055595A}`
  * Data: `81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 10 00 00 00 10 00 00 00 00 00 00 00 10 00 00 00 10 00 00 00 00 00 00 00 80 BB 00 00 80 BB 00 00 00 00 00 00`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

## Device: Line In (Blackmagic Audio)

 * Moniker Display Name: `@device:cm:{33D9A762-90C8-11D0-BD43-00A0C911CE86}\Line In (Blackmagic Audio)`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{2CA8CA52-3C3F-11D2-B73D-00C04FB6BD3D}` - `CLSID_AudioInputMixerProperties`, AudioInputMixer Property Page

### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `23`
  * Structure Size: `52` (expected `52`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 44 AC 00 00 10 B1 02 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `176400`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 44 AC 00 00 10 B1 02 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `176400`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 01 00 44 AC 00 00 88 58 01 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `88200`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 00 7D 00 00 00 F4 01 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `32000`
   * `.nAvgBytesPerSec: `128000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 01 00 00 7D 00 00 00 FA 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `32000`
   * `.nAvgBytesPerSec: `64000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 22 56 00 00 88 58 01 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `88200`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 01 00 22 56 00 00 44 AC 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 11 2B 00 00 44 AC 00 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 8

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 01 00 11 2B 00 00 22 56 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `22050`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 9

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 40 1F 00 00 00 7D 00 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `32000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 10

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 01 00 40 1F 00 00 80 3E 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `16000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 11

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 44 AC 00 00 88 58 01 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `88200`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 12

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 01 00 44 AC 00 00 44 AC 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 13

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 22 56 00 00 44 AC 00 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 14

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 01 00 22 56 00 00 22 56 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `22050`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 15

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 11 2B 00 00 22 56 00 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `22050`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 16

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 01 00 11 2B 00 00 11 2B 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `11025`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 17

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 40 1F 00 00 80 3E 00 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `16000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 18

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 01 00 40 1F 00 00 40 1F 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `8000`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 19

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 80 BB 00 00 00 EE 02 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `192000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 20

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 01 00 80 BB 00 00 00 77 01 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `96000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 21

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 00 77 01 00 00 DC 05 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `96000`
   * `.nAvgBytesPerSec: `384000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 22

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 01 00 00 77 01 00 00 EE 02 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `96000`
   * `.nAvgBytesPerSec: `192000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

### Pin: Master Volume

 * Direction: `PINDIR_INPUT`
Interfaces:

  * `IQualityControl`

## Device: Microphone (2- Realtek High Def

 * Moniker Display Name: `@device:cm:{33D9A762-90C8-11D0-BD43-00A0C911CE86}\Microphone (2- Realtek High Def`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{2CA8CA52-3C3F-11D2-B73D-00C04FB6BD3D}` - `CLSID_AudioInputMixerProperties`, AudioInputMixer Property Page

### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `23`
  * Structure Size: `52` (expected `52`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 A8 77 5C 00`
  * Format Data: `01 00 02 00 44 AC 00 00 10 B1 02 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `176400`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 44 AC 00 00 10 B1 02 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `176400`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 A8 77 5C 00`
  * Format Data: `01 00 01 00 44 AC 00 00 88 58 01 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `88200`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 00 7D 00 00 00 F4 01 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `32000`
   * `.nAvgBytesPerSec: `128000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 A8 77 5C 00`
  * Format Data: `01 00 01 00 00 7D 00 00 00 FA 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `32000`
   * `.nAvgBytesPerSec: `64000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 22 56 00 00 88 58 01 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `88200`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 A8 77 5C 00`
  * Format Data: `01 00 01 00 22 56 00 00 44 AC 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 11 2B 00 00 44 AC 00 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 8

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 A8 77 5C 00`
  * Format Data: `01 00 01 00 11 2B 00 00 22 56 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `22050`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 9

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 40 1F 00 00 00 7D 00 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `32000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 10

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 A8 77 5C 00`
  * Format Data: `01 00 01 00 40 1F 00 00 80 3E 00 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `16000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 11

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 44 AC 00 00 88 58 01 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `88200`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 12

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 A8 77 5C 00`
  * Format Data: `01 00 01 00 44 AC 00 00 44 AC 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `44100`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 13

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 22 56 00 00 44 AC 00 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `44100`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 14

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 A8 77 5C 00`
  * Format Data: `01 00 01 00 22 56 00 00 22 56 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `22050`
   * `.nAvgBytesPerSec: `22050`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 15

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 11 2B 00 00 22 56 00 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `22050`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 16

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 A8 77 5C 00`
  * Format Data: `01 00 01 00 11 2B 00 00 11 2B 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `11025`
   * `.nAvgBytesPerSec: `11025`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 17

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 40 1F 00 00 80 3E 00 00 02 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `16000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 18

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 A8 77 5C 00`
  * Format Data: `01 00 01 00 40 1F 00 00 40 1F 00 00 01 00 08 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `8000`
   * `.nAvgBytesPerSec: `8000`
   * `.nBlockAlign`: `1`
   * `.wBitsPerSample`: `8`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 19

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 80 BB 00 00 00 EE 02 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `192000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 20

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 A8 77 5C 00`
  * Format Data: `01 00 01 00 80 BB 00 00 00 77 01 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `48000`
   * `.nAvgBytesPerSec: `96000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 21

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 88 77 5C 00`
  * Format Data: `01 00 02 00 00 77 01 00 00 DC 05 00 04 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `2`
   * `.nSamplesPerSec`: `96000`
   * `.nAvgBytesPerSec: `384000`
   * `.nBlockAlign`: `4`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

#### Capability: 22

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 A8 77 5C 00`
  * Format Data: `01 00 01 00 00 77 01 00 00 EE 02 00 02 00 10 00 00 00`
  * `.subtype`: `FourCC 0x00000001`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2`
  * `.cbFormat`: `18`
  * `WAVEFORMATEX`:
   * `.wFormatTag`: `1`
   * `.nChannels`: `1`
   * `.nSamplesPerSec`: `96000`
   * `.nAvgBytesPerSec: `192000`
   * `.nBlockAlign`: `2`
   * `.wBitsPerSample`: `16`
   * `.cbSize`: `0`
 * `AUDIO_STREAM_CONFIG_CAPS`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 08 00 00 00 10 00 00 00 08 00 00 00 11 2B 00 00 44 AC 00 00 11 2B 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `8`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `8`
  * `.MinimumSampleFrequency`: `11025`
  * `.MaximumSampleFrequency`: `44100`
  * `.SampleFrequencyGranularity`: `11025`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

### Pin: Master Volume

 * Direction: `PINDIR_INPUT`
Interfaces:

  * `IQualityControl`

