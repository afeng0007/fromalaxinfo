# System

 * Version: 5.1.2600, Service Pack 3.0
 * Computer Name: `v35_`
 * User Name: `V35_\Administrador` (Administrator)
 * Local Time: `21/01/2016 03:07:33 p.m.`
 * Architecture: x86
 * Processors: `2`, Active Mask `0x3`
 * Page Size: `0x1000`
 * Application Address Space: `0x00010000`..`0x7FFEFFFF`
 * CPU: `GenuineIntel`, 0x1 EDX `0xBFEBFBFF` (MMX, SSE, SSE2), 0x1 ECX `0x0400E39D` (SSE3, SSSE3), Brand `Pentium(R) Dual-Core  CPU      E5300  @ 2.60GHz`
 * Physical Memory: `3.071` MB
 * Committed Memory Limit: `4.961` MB
 * Application Version: `1.0.0.499`

# Video

 * 713x BDA Analog Capture
 * Hauppauge Siena Video Capture
 * screen-capture-recorder
 * XSplitBroadcaster

## Device: 713x BDA Analog Capture

 * Moniker Display Name: `@device:pnp:\\?\pci#ven_1131&dev_7133&subsys_b13617de&rev_d1#4&cf81c54&0&10f0#{65e8773d-8f56-11d0-a3b9-00a0c9223196}\{bbefb6c7-2fc4-4139-bb8b-a58bba724002}`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IAMAnalogVideoDecoder`
  * `IAMDeviceRemoval`
  * `IAMFilterMiscFlags`
  * `IAMVideoProcAmp`

Property Pages:

  * `{71F96466-78F3-11D0-A18C-00A0C9118956}` - `CLSID_AnalogVideoDecoderPropertyPage`, Página de propiedades de VideoDecoder
  * `{71F96464-78F3-11D0-A18C-00A0C9118956}` - `CLSID_VideoProcAmpPropertyPage`, Página de propiedades de VideoProcAmp

### IAMVideoProcAmp

 * `VideoProcAmp_Brightness`: `121`, flags `0x00`, `0`..`255`, step `121`, default `128`, cap flags `0x02`
 * `VideoProcAmp_Contrast`: `71`, flags `0x00`, `-128`..`127`, step `71`, default `68`, cap flags `0x02`
 * `VideoProcAmp_Hue`: `0`, flags `0x00`, `-128`..`127`, step `0`, default `0`, cap flags `0x02`
 * `VideoProcAmp_Saturation`: `64`, flags `0x00`, `-128`..`127`, step `64`, default `64`, cap flags `0x02`
 * `VideoProcAmp_Sharpness`: `7`, flags `0x00`, `-8`..`7`, step `7`, default `0`, cap flags `0x02`

### Pin: Entrada de vídeo analógico

 * Direction: `PINDIR_INPUT`
 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4283-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_ANALOGVIDEOIN`
Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`

### Pin: Analog Audioinput

 * Direction: `PINDIR_INPUT`
 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{D28A580A-9B1F-4B0C-9C33-9BF0A8EA636B}`
Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`

### Pin: Capturar

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `7`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 8C 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 40 AC 1C 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 68 3C 01 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 10 00 55 59 56 59 00 8C 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `691.200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `20736000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `691.200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F7 FF 1F 00 D0 02 00 00 E0 01 00 00 A0 00 00 00 78 00 00 00 00 03 00 00 40 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 00 03 00 00 40 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 40 4B 4C 00 00 00 00 00 00 60 09 00 00 00 A8 0C`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2097143`
  * `.InputSize`: `720` x `480`
  * `.MinCroppingSize`: `160` x `120`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `160` x `120`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `500 0000`
  * `.MinBitsPerSecond`: `614.400`
  * `.MaxBitsPerSecond`: `212.336.640`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 70 00 00 00 38 51 17 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 40 19 01 00 00 00 00 63 17 05 00 00 00 00 00 05 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 00 00 00 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 59 55 59 32 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614.400`
  * `.cbFormat`: `112`
  * `VIDEOINFOHEADER2`:
 * Unknown Capabilities:
  * Type: `{F72A76A0-EB0A-11D0-ACE4-0000C0CC16BA}`
  * Data: `A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA F7 FF 1F 00 D0 02 00 00 E0 01 00 00 A0 00 00 00 78 00 00 00 00 03 00 00 40 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 00 03 00 00 40 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 40 4B 4C 00 00 00 00 00 00 60 09 00 00 00 A8 0C`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 8C 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 40 AC 1C 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 68 3C 01 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 10 00 55 59 56 59 00 8C 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `691.200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `20736000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `691.200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F7 FF 1F 00 D0 02 00 00 E0 01 00 00 A0 00 00 00 78 00 00 00 00 03 00 00 40 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 00 03 00 00 40 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 40 4B 4C 00 00 00 00 00 00 60 09 00 00 00 A8 0C`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2097143`
  * `.InputSize`: `720` x `480`
  * `.MinCroppingSize`: `160` x `120`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `160` x `120`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `500 0000`
  * `.MinBitsPerSecond`: `614.400`
  * `.MaxBitsPerSecond`: `212.336.640`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 55 59 56 59 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 8C 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 40 AC 1C 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 68 3C 01 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 10 00 55 59 56 59 00 8C 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC UYVY`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `691.200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `20736000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `691.200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 E0 01 00 00 A0 00 00 00 78 00 00 00 00 03 00 00 40 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 00 03 00 00 40 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 40 4B 4C 00 00 00 00 00 00 60 09 00 00 00 A8 0C`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `480`
  * `.MinCroppingSize`: `160` x `120`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `160` x `120`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `500 0000`
  * `.MinBitsPerSecond`: `614.400`
  * `.MaxBitsPerSecond`: `212.336.640`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7C EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 8C 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 40 AC 1C 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 68 3C 01 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 10 00 55 59 56 59 00 8C 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `691.200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `20736000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `691.200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F7 FF 1F 00 D0 02 00 00 E0 01 00 00 A0 00 00 00 78 00 00 00 00 03 00 00 40 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 00 03 00 00 40 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 40 4B 4C 00 00 00 00 00 00 60 09 00 00 00 A8 0C`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2097143`
  * `.InputSize`: `720` x `480`
  * `.MinCroppingSize`: `160` x `120`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `160` x `120`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `500 0000`
  * `.MinBitsPerSecond`: `614.400`
  * `.MaxBitsPerSecond`: `212.336.640`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 8C 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 40 AC 1C 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 68 3C 01 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 10 00 55 59 56 59 00 8C 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `691.200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `20736000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `691.200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F7 FF 1F 00 D0 02 00 00 E0 01 00 00 A0 00 00 00 78 00 00 00 00 03 00 00 40 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 00 03 00 00 40 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 40 4B 4C 00 00 00 00 00 00 10 0E 00 00 00 FC 12`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2097143`
  * `.InputSize`: `720` x `480`
  * `.MinCroppingSize`: `160` x `120`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `160` x `120`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `500 0000`
  * `.MinBitsPerSecond`: `921.600`
  * `.MaxBitsPerSecond`: `318.504.960`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 8C 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 40 AC 1C 00`
  * Format Data: `00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 D0 02 00 00 E0 01 00 00 00 68 3C 01 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 10 00 55 59 56 59 00 8C 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `691.200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`720`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`720`, `480`)
  * `.dwBitRate`: `20736000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1498831189` `UYVY`
   * `.biSizeImage`: `691.200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A F7 FF 1F 00 D0 02 00 00 E0 01 00 00 A0 00 00 00 78 00 00 00 00 03 00 00 40 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 00 03 00 00 40 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 40 4B 4C 00 00 00 00 00 00 C0 12 00 00 00 50 19`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `2097143`
  * `.InputSize`: `720` x `480`
  * `.MinCroppingSize`: `160` x `120`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `160` x `120`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `500 0000`
  * `.MinBitsPerSecond`: `1.228.800`
  * `.MaxBitsPerSecond`: `424.673.280`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

Property Pages:

  * `{71F96467-78F3-11D0-A18C-00A0C9118956}` - `CLSID_VideoStreamConfigPropertyPage`, Página de propiedades de VideoStreamConfig

### Pin: VBI

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4284-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_VBI`
 * Capabilities:
  * Count: `3`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `E1 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA A0 D9 20 CA 3E 3E D1 11 9B F9 00 C0 4F BB DE BF 00 00 00 00 00 00 00 00 00 00 00 00 E0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 30 00 00 00 A0 7C 1E 03`
  * Format Data: `0A 00 00 00 15 00 00 00 C0 FC 9B 01 FE 03 00 00 FE 03 00 00 FE 03 00 00 D4 18 00 00 01 00 00 00 A0 05 00 00 40 06 00 00 80 70 00 00 00 00 00 00`
  * `.majortype`: `{F72A76E1-EB0A-11D0-ACE4-0000C0CC16BA}`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `48`
  * Extra Data: `0A 00 00 00 15 00 00 00 C0 FC 9B 01 FE 03 00 00 FE 03 00 00 FE 03 00 00 D4 18 00 00 01 00 00 00 A0 05 00 00 40 06 00 00 80 70 00 00 00 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 F7 FF 1F 00 D0 02 00 00 E0 01 00 00 A0 00 00 00 78 00 00 00 00 03 00 00 40 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 00 03 00 00 40 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 40 4B 4C 00 00 00 00 00 00 C0 12 00 00 00 50 19`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `2097143`
  * `.InputSize`: `720` x `480`
  * `.MinCroppingSize`: `160` x `120`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `160` x `120`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `500 0000`
  * `.MinBitsPerSecond`: `1.228.800`
  * `.MaxBitsPerSecond`: `424.673.280`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `E1 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA A0 D9 20 CA 3E 3E D1 11 9B F9 00 C0 4F BB DE BF 00 00 00 00 00 00 00 00 00 00 00 00 E0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 30 00 00 00 A0 7C 1E 03`
  * Format Data: `06 00 00 00 16 00 00 00 C0 FC 9B 01 FE 03 00 00 FE 03 00 00 FE 03 00 00 D4 18 00 00 10 00 00 00 A0 05 00 00 40 06 00 00 80 70 00 00 00 00 00 00`
  * `.majortype`: `{F72A76E1-EB0A-11D0-ACE4-0000C0CC16BA}`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `48`
  * Extra Data: `06 00 00 00 16 00 00 00 C0 FC 9B 01 FE 03 00 00 FE 03 00 00 FE 03 00 00 D4 18 00 00 10 00 00 00 A0 05 00 00 40 06 00 00 80 70 00 00 00 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 F7 FF 1F 00 D0 02 00 00 E0 01 00 00 A0 00 00 00 78 00 00 00 00 03 00 00 40 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 00 03 00 00 40 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 40 4B 4C 00 00 00 00 00 00 C0 12 00 00 00 50 19`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `2097143`
  * `.InputSize`: `720` x `480`
  * `.MinCroppingSize`: `160` x `120`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `160` x `120`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `500 0000`
  * `.MinBitsPerSecond`: `1.228.800`
  * `.MaxBitsPerSecond`: `424.673.280`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `E1 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA A0 D9 20 CA 3E 3E D1 11 9B F9 00 C0 4F BB DE BF 00 00 00 00 00 00 00 00 00 00 00 00 E0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 30 00 00 00 A0 7C 1E 03`
  * Format Data: `06 00 00 00 17 00 00 00 C0 FC 9B 01 FE 03 00 00 FE 03 00 00 FE 03 00 00 D4 18 00 00 10 00 00 00 A0 05 00 00 40 06 00 00 80 70 00 00 00 00 00 00`
  * `.majortype`: `{F72A76E1-EB0A-11D0-ACE4-0000C0CC16BA}`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `0`
  * `.cbFormat`: `48`
  * Extra Data: `06 00 00 00 17 00 00 00 C0 FC 9B 01 FE 03 00 00 FE 03 00 00 FE 03 00 00 D4 18 00 00 10 00 00 00 A0 05 00 00 40 06 00 00 80 70 00 00 00 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 F7 FF 1F 00 D0 02 00 00 E0 01 00 00 A0 00 00 00 78 00 00 00 00 03 00 00 40 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 00 03 00 00 40 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 40 4B 4C 00 00 00 00 00 00 C0 12 00 00 00 50 19`
  * `.guid`: `{00000000-0000-0000-0000-000000000000}`
  * `.VideoStandard`: `2097143`
  * `.InputSize`: `720` x `480`
  * `.MinCroppingSize`: `160` x `120`
  * `.MaxCroppingSize`: `768` x `576`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `160` x `120`
  * `.MaxOutputSize`: `768` x `576`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `500 0000`
  * `.MinBitsPerSecond`: `1.228.800`
  * `.MaxBitsPerSecond`: `424.673.280`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

### Pin: Audio

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `2`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 78 6F 21 03`
  * Format Data: `01 00 02 00 00 7D 00 00 00 F4 01 00 04 00 10 00 00 00`
  * `.majortype`: `MEDIATYPE_Audio`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 02 00 00 00 01 00 00 00 10 00 00 00 10 00 00 00 01 00 00 00 00 7D 00 00 00 7D 00 00 01 00 00 00`
  * `.MinimumChannels`: `1`
  * `.MaximumChannels`: `2`
  * `.ChannelsGranularity`: `1`
  * `.MinimumBitsPerSample`: `16`
  * `.MaximumBitsPerSample`: `16`
  * `.BitsPerSampleGranularity`: `1`
  * `.MinimumSampleFrequency`: `32000`
  * `.MaximumSampleFrequency`: `32000`
  * `.SampleFrequencyGranularity`: `1`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 78 6F 21 03`
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

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

Property Pages:

  * `{71F96467-78F3-11D0-A18C-00A0C9118956}` - `CLSID_VideoStreamConfigPropertyPage`, Página de propiedades de VideoStreamConfig

## Device: Hauppauge Siena Video Capture

 * Moniker Display Name: `@device:pnp:\\?\usb#vid_2040&pid_e524#e524-00-00ae7a25#{65e8773d-8f56-11d0-a3b9-00a0c9223196}\{9b365890-165f-11d0-a195-0020afd156e4}`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IAMAnalogVideoDecoder`
  * `IAMDeviceRemoval`
  * `IAMFilterMiscFlags`
  * `IAMVideoProcAmp`

Property Pages:

  * `{10A64E72-CE72-4FFD-8D0D-9ECA43FB6A5A}` - Hcw PropPage Audio
  * `{2C669739-B41C-4092-9750-97AC9073507B}` - Hcw PropPage Video
  * `{33A93DDC-434C-4881-8788-9458ACEFDA80}` - Hcw PropPage Info
  * `{DB2132AE-12DB-4624-A4F1-517F1313D66F}` - Hcw PropPage System
  * `{EA4F9A26-4AD7-401B-B137-96943BF9DDDD}` - Hcw PropPage Diagnostics
  * `{71F96466-78F3-11D0-A18C-00A0C9118956}` - `CLSID_AnalogVideoDecoderPropertyPage`, Página de propiedades de VideoDecoder
  * `{71F96464-78F3-11D0-A18C-00A0C9118956}` - `CLSID_VideoProcAmpPropertyPage`, Página de propiedades de VideoProcAmp

### IAMVideoProcAmp

 * `VideoProcAmp_Brightness`: `1400`, flags `0x02`, `0`..`10000`, step `39`, default `1443`, cap flags `0x02`
 * `VideoProcAmp_Contrast`: `5800`, flags `0x02`, `0`..`10000`, step `39`, default `5850`, cap flags `0x02`
 * `VideoProcAmp_Hue`: `4900`, flags `0x02`, `0`..`10000`, step `39`, default `5000`, cap flags `0x02`
 * `VideoProcAmp_Saturation`: `6000`, flags `0x02`, `0`..`10000`, step `39`, default `6045`, cap flags `0x02`
 * `VideoProcAmp_Sharpness`: `0`, flags `0x02`, `0`..`100`, step `10`, default `100`, cap flags `0x02`

### Pin: Entrada de vídeo analógico

 * Direction: `PINDIR_INPUT`
 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4283-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_ANALOGVIDEOIN`
Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`

### Pin: Analog Audio In

 * Direction: `PINDIR_INPUT`
 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{3E2D189F-B15C-4447-96F1-BD1D64FB99BA}`
Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`

### Pin: 656

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{4EF89945-4D43-48D7-A442-A1B4E7813036}`
 * Capabilities:
  * Count: `1`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 48 43 57 32 5B 00 04 45 99 F8 90 82 6C 80 66 57 01 00 00 00 00 00 00 00 00 E9 07 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 E8 00 00 00 38 B9 1E 03`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 70 6A 07 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 D0 02 00 00 E0 01 00 00 01 00 0C 00 43 58 46 32 00 E9 07 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `518.400`
  * `.cbFormat`: `232`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `124416000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `720`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `12`
   * `.biCompression`: `843470915` `CXF2`
   * `.biSizeImage`: `518.400`
  * Extra Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 03 0E 10 00 D0 02 00 00 E0 01 00 00 40 01 00 00 E0 01 00 00 D0 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 E0 01 00 00 D0 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 63 17 05 00 00 00 00 00 00 C0 A8 00 00 70 6A 07`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `1052163`
  * `.InputSize`: `720` x `480`
  * `.MinCroppingSize`: `320` x `480`
  * `.MaxCroppingSize`: `720` x `480`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `320` x `480`
  * `.MaxOutputSize`: `720` x `480`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `33 3667`
  * `.MinBitsPerSecond`: `11.059.200`
  * `.MaxBitsPerSecond`: `124.416.000`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

Property Pages:

  * `{CED15D20-B62B-4802-A99E-13545C28217C}` - Pin Resolution

## Device: screen-capture-recorder

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{4EA6930A-2C8A-4AE6-A561-56E4B5044439}`

Interfaces:

  * `IKsPropertySet`

### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `7`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 04 00 00 08 B0 17 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 50 05 00 00 00 03 00 00 01 00 20 00 00 00 00 00 00 C0 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4.177.920`
  * `.cbFormat`: `1128`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1360`
   * `.biHeight`: `768`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `4.177.920`
  * Extra Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
 * Unknown Capabilities:
  * Type: `{0012EDF8-099A-7C92-6109-927C08061500}`
  * Data: `F8 ED 12 00 9A 09 92 7C 61 09 92 7C 08 06 15 00 00 00 00 00 50 05 00 00 00 03 00 00 50 05 00 00 00 03 00 00 50 05 00 00 00 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 50 05 00 00 00 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 E9 91 7C 15 16 05 00 00 00 00 00 00 65 CD 1D 00 00 00 00 F0 00 00 00 2C 00 C4 3B`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 04 00 00 70 63 21 03`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 50 05 00 00 00 03 00 00 01 00 20 00 00 00 00 00 00 C0 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4.177.920`
  * `.cbFormat`: `1128`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1360`
   * `.biHeight`: `768`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `4.177.920`
  * Extra Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
 * Unknown Capabilities:
  * Type: `{0012EDF8-099A-7C92-6109-927C08061500}`
  * Data: `F8 ED 12 00 9A 09 92 7C 61 09 92 7C 08 06 15 00 00 00 00 00 50 05 00 00 00 03 00 00 50 05 00 00 00 03 00 00 50 05 00 00 00 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 50 05 00 00 00 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 E9 91 7C 15 16 05 00 00 00 00 00 00 65 CD 1D 00 00 00 00 F0 00 00 00 2C 00 C4 3B`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 D0 2F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 04 00 00 70 63 21 03`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 50 05 00 00 00 03 00 00 01 00 18 00 00 00 00 00 00 D0 2F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `3.133.440`
  * `.cbFormat`: `1128`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1360`
   * `.biHeight`: `768`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `3.133.440`
  * Extra Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
 * Unknown Capabilities:
  * Type: `{0012EDF8-099A-7C92-6109-927C08061500}`
  * Data: `F8 ED 12 00 9A 09 92 7C 61 09 92 7C 08 06 15 00 00 00 00 00 50 05 00 00 00 03 00 00 50 05 00 00 00 03 00 00 50 05 00 00 00 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 50 05 00 00 00 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 E9 91 7C 15 16 05 00 00 00 00 00 00 65 CD 1D 00 00 00 00 F0 00 00 00 2C 00 C4 3B`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 E0 1F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 04 00 00 70 63 21 03`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 50 05 00 00 00 03 00 00 01 00 10 00 00 00 00 00 00 E0 1F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 F8 00 00 E0 07 00 00 1F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2.088.960`
  * `.cbFormat`: `1128`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1360`
   * `.biHeight`: `768`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `2.088.960`
  * Extra Data: `00 F8 00 00 E0 07 00 00 1F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
 * Unknown Capabilities:
  * Type: `{0012EDF8-099A-7C92-6109-927C08061500}`
  * Data: `F8 ED 12 00 9A 09 92 7C 61 09 92 7C 08 06 15 00 00 00 00 00 50 05 00 00 00 03 00 00 50 05 00 00 00 03 00 00 50 05 00 00 00 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 50 05 00 00 00 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 E9 91 7C 15 16 05 00 00 00 00 00 00 65 CD 1D 00 00 00 00 F0 00 00 00 2C 00 C4 3B`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 E0 1F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 04 00 00 70 63 21 03`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 50 05 00 00 00 03 00 00 01 00 10 00 03 00 00 00 00 E0 1F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 7C 00 00 E0 03 00 00 1F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2.088.960`
  * `.cbFormat`: `1128`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1360`
   * `.biHeight`: `768`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `3` `0x00000003`
   * `.biSizeImage`: `2.088.960`
  * Extra Data: `00 7C 00 00 E0 03 00 00 1F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
 * Unknown Capabilities:
  * Type: `{0012EDF8-099A-7C92-6109-927C08061500}`
  * Data: `F8 ED 12 00 9A 09 92 7C 61 09 92 7C 08 06 15 00 00 00 00 00 50 05 00 00 00 03 00 00 50 05 00 00 00 03 00 00 50 05 00 00 00 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 50 05 00 00 00 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 E9 91 7C 15 16 05 00 00 00 00 00 00 65 CD 1D 00 00 00 00 F0 00 00 00 2C 00 C4 3B`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 F0 0F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 04 00 00 70 63 21 03`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 50 05 00 00 00 03 00 00 01 00 08 00 00 00 00 00 00 F0 0F 00 00 00 00 00 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1.044.480`
  * `.cbFormat`: `1128`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1360`
   * `.biHeight`: `768`
   * `.biPlanes`: `1`
   * `.biBitCount`: `8`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1.044.480`
  * Extra Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
 * Unknown Capabilities:
  * Type: `{0012EDF8-099A-7C92-6109-927C08061500}`
  * Data: `F8 ED 12 00 9A 09 92 7C 61 09 92 7C 08 06 15 00 00 00 00 00 50 05 00 00 00 03 00 00 50 05 00 00 00 03 00 00 50 05 00 00 00 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 50 05 00 00 00 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 E9 91 7C 15 16 05 00 00 00 00 00 00 65 CD 1D 00 00 00 00 F0 00 00 00 2C 00 C4 3B`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 49 34 32 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 E8 17 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 68 04 00 00 70 63 21 03`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 50 05 00 00 00 03 00 00 01 00 0C 00 49 34 32 30 00 E8 17 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC I420`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1.566.720`
  * `.cbFormat`: `1128`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1360`
   * `.biHeight`: `768`
   * `.biPlanes`: `1`
   * `.biBitCount`: `12`
   * `.biCompression`: `808596553` `I420`
   * `.biSizeImage`: `1.566.720`
  * Extra Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
 * Unknown Capabilities:
  * Type: `{0012EDF8-099A-7C92-6109-927C08061500}`
  * Data: `F8 ED 12 00 9A 09 92 7C 61 09 92 7C 08 06 15 00 00 00 00 00 50 05 00 00 00 03 00 00 50 05 00 00 00 03 00 00 50 05 00 00 00 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 50 05 00 00 00 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 E9 91 7C 15 16 05 00 00 00 00 00 00 65 CD 1D 00 00 00 00 F0 00 00 00 2C 00 C4 3B`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMStreamConfig`

## Device: XSplitBroadcaster

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{VHSplitProc}_XSplitBroadcaster_1_staticsource_VIDEO`

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `5`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4E 56 31 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 C2 01 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 6E 21 03`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 0C 00 4E 56 31 32 00 C2 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC NV12`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `115.200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `0`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `12`
   * `.biCompression`: `842094158` `NV12`
   * `.biSizeImage`: `115.200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2F 99 00 00 00 00 00 00 80 96 98 00 00 00 00 00 00 08 07 00 00 80 97 06`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `320` x `240`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `320` x `240`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1` x `1`
  * `.MaxOutputSize`: `320` x `240`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `3 9215`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `460.800`
  * `.MaxBitsPerSecond`: `110.592.000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 59 55 56 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 68 4B 18 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 20 00 41 59 55 56 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC AYUV`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307.200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `0`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `1448433985` `AYUV`
   * `.biSizeImage`: `307.200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2F 99 00 00 00 00 00 00 80 96 98 00 00 00 00 00 00 08 07 00 00 80 97 06`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `320` x `240`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `320` x `240`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1` x `1`
  * `.MaxOutputSize`: `320` x `240`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `3 9215`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `460.800`
  * `.MaxBitsPerSecond`: `110.592.000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 58 02 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 6E 21 03`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 10 00 59 55 59 32 00 58 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `153.600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `0`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `153.600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2F 99 00 00 00 00 00 00 80 96 98 00 00 00 00 00 00 08 07 00 00 80 97 06`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `320` x `240`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `320` x `240`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1` x `1`
  * `.MaxOutputSize`: `320` x `240`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `3 9215`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `460.800`
  * `.MaxBitsPerSecond`: `110.592.000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 68 4B 18 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 20 00 00 00 00 00 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307.200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `0`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `307.200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2F 99 00 00 00 00 00 00 80 96 98 00 00 00 00 00 00 08 07 00 00 80 97 06`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `320` x `240`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `320` x `240`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1` x `1`
  * `.MaxOutputSize`: `320` x `240`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `3 9215`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `460.800`
  * `.MaxBitsPerSecond`: `110.592.000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D0 6E 21 03`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 00 00 00 00 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `230.400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `0`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `230.400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2F 99 00 00 00 00 00 00 80 96 98 00 00 00 00 00 00 08 07 00 00 80 97 06`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `320` x `240`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `320` x `240`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1` x `1`
  * `.MaxOutputSize`: `320` x `240`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `3 9215`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `460.800`
  * `.MaxBitsPerSecond`: `110.592.000`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMStreamConfig`

Property Pages:

  * `{71F96467-78F3-11D0-A18C-00A0C9118956}` - `CLSID_VideoStreamConfigPropertyPage`, Página de propiedades de VideoStreamConfig

# Audio

 * HD Audio front mic
 * XSplitBroadcaster
 * 713x BDA Analog Audio Capture
 * HD Audio rear input
 * USB Audio

## Device: HD Audio front mic

 * Moniker Display Name: `@device:cm:{33D9A762-90C8-11D0-BD43-00A0C911CE86}\HD Audio front mic`

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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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

### Pin: Micrófono

 * Direction: `PINDIR_INPUT`
Interfaces:

  * `IQualityControl`

## Device: XSplitBroadcaster

 * Moniker Display Name: `@device:sw:{33D9A762-90C8-11D0-BD43-00A0C911CE86}\{VHSplitProc}_XSplitBroadcaster_1_staticsource_AUDIO`

## Device: 713x BDA Analog Audio Capture

 * Moniker Display Name: `@device:cm:{33D9A762-90C8-11D0-BD43-00A0C911CE86}\713x BDA Analog Audio Capture`

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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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

### Pin: Capturar

 * Direction: `PINDIR_INPUT`
Interfaces:

  * `IQualityControl`

## Device: HD Audio rear input

 * Moniker Display Name: `@device:cm:{33D9A762-90C8-11D0-BD43-00A0C911CE86}\HD Audio rear input`

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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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

### Pin: Micrófono

 * Direction: `PINDIR_INPUT`
Interfaces:

  * `IQualityControl`

### Pin: CD de audio

 * Direction: `PINDIR_INPUT`
Interfaces:

  * `IQualityControl`

### Pin: Mezcla estéreo

 * Direction: `PINDIR_INPUT`
Interfaces:

  * `IQualityControl`

### Pin: Línea de entrada

 * Direction: `PINDIR_INPUT`
Interfaces:

  * `IQualityControl`

## Device: USB Audio

 * Moniker Display Name: `@device:cm:{33D9A762-90C8-11D0-BD43-00A0C911CE86}\USB Audio`

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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 80 79 1E 03`
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

### Pin: Interfaz SPDIF

 * Direction: `PINDIR_INPUT`
Interfaces:

  * `IQualityControl`

### Pin: Línea

 * Direction: `PINDIR_INPUT`
Interfaces:

  * `IQualityControl`

### Pin: Micrófono

 * Direction: `PINDIR_INPUT`
Interfaces:

  * `IQualityControl`

### Pin: Sum

 * Direction: `PINDIR_INPUT`
Interfaces:

  * `IQualityControl`

