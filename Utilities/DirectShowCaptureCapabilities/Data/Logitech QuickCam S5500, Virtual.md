# System

 * Version: `6.1` Build `7601`; Windows 7; Service Pack 1; Service Pack `1.0`
 * Computer Name: `ELSUITE`
 * User Name: `Aleksey` (Administrator)
 * Local Time: `03.10.2014 2:30:52`
 * Architecture: x86
 * Processors: `4`, Active Mask `0xF`
 * Page Size: `0x1000`
 * Application Address Space: `0x00010000`..`0xFFFEFFFF`
 * Physical Memory: `4 095` MB
 * Committed Memory Limit: `8 188` MB

# Video

## Device: ManyCam Virtual Webcam

 * Moniker Display Name: `@device:pnp:\\?\root#media#0000#{65e8773d-8f56-11d0-a3b9-00a0c9223196}\global`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IAMAnalogVideoDecoder`
  * `IAMDeviceRemoval`
  * `IAMFilterMiscFlags`
  * `IAMVideoControl`
  * `IAMVideoProcAmp`

Property Pages:

  * `{71F96466-78F3-11D0-A18C-00A0C9118956}` - `CLSID_AnalogVideoDecoderPropertyPage`, VideoDecoder Property Page
  * `{71F96464-78F3-11D0-A18C-00A0C9118956}` - `CLSID_VideoProcAmpPropertyPage`, VideoProcAmp Property Page

### IAMVideoProcAmp

 * `VideoProcAmp_Brightness`: `5000`, flags `0x01`; `0`..`10000`, step `1000`, default `5000`, cap flags `0x03`
 * `VideoProcAmp_Contrast`: `5000`, flags `0x01`; `0`..`10000`, step `39`, default `5000`, cap flags `0x03`
 * `VideoProcAmp_ColorEnable`: `1`, flags `0x02`; `0`..`1`, step `1`, default `1`, cap flags `0x02`

### Pin: Запись

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `1`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 78 69 00 00 00 00 00 63 17 05 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 00 00 00 00 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `230 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `6912000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3667`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `230 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 D0 02 00 00 E0 01 00 00 A0 00 00 00 78 00 00 00 D0 02 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 08 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 D0 02 00 00 E0 01 00 00 08 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 F0 D2 00 00 E0 D4 0E`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `720` x `480`
  * `.MinCroppingSize`: `160` x `120`
  * `.MaxCroppingSize`: `720` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `160` x `120`
  * `.MaxOutputSize`: `720` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `13 824 000`
  * `.MaxBitsPerSecond`: `248 832 000`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

Property Pages:

  * `{71F96467-78F3-11D0-A18C-00A0C9118956}` - `CLSID_VideoStreamConfigPropertyPage`, VideoStreamConfig Property Page

## Device: Logitech QuickCam S5500

 * Moniker Display Name: `@device:pnp:\\?\usb#vid_046d&pid_09a1&mi_00#6&3ae52943&1&0000#{65e8773d-8f56-11d0-a3b9-00a0c9223196}\{bbefb6c7-2fc4-4139-bb8b-a58bba724083}`

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

  * `{7103E55E-9FAC-4EA6-8680-154AFB69C4E8}` - Pan Tilt Zoom
  * `{0932B8A4-BBB4-4BC0-A8AB-91C626950C75}` - Device Settings
  * `{09AC4892-81B7-4D39-B235-8F0DB0DAF4F8}` - Status
  * `{1159F2AF-F989-4D11-8B34-9550029269BB}` - Advanced properties
  * `{4C8DD17E-7079-4C7E-96E5-A7AFDB12F132}` - Registers
  * `{517539A3-905F-4755-9F94-D91B095A07CC}` - Troubleshooting
  * `{5872C980-0AAF-4CDB-A62D-4F453DA2EFAD}` - Debug
  * `{65A3CD37-3208-45B1-8F10-5F5BAD78DDD8}` - Device Information
  * `{DE7371F4-4CCD-47CD-B12B-8887C9125895}` - USB Traffic
  * `{71F96465-78F3-11D0-A18C-00A0C9118956}` - `CLSID_CameraControlPropertyPage`, CameraControl Property Page
  * `{3DC2E821-4713-11D2-BA41-00A0C90D2B05}`

### IAMVideoProcAmp

 * `VideoProcAmp_Brightness`: `144`, flags `0x02`; `0`..`255`, step `1`, default `144`, cap flags `0x02`
 * `VideoProcAmp_Contrast`: `27`, flags `0x02`; `0`..`255`, step `1`, default `27`, cap flags `0x02`
 * `VideoProcAmp_Saturation`: `28`, flags `0x02`; `0`..`255`, step `1`, default `28`, cap flags `0x02`
 * `VideoProcAmp_Sharpness`: `180`, flags `0x02`; `0`..`255`, step `1`, default `180`, cap flags `0x02`
 * `VideoProcAmp_WhiteBalance`: `5039`, flags `0x02`; `0`..`10000`, step `10`, default `4000`, cap flags `0x03`
 * `VideoProcAmp_BacklightCompensation`: `1`, flags `0x02`; `0`..`2`, step `1`, default `1`, cap flags `0x02`
 * `VideoProcAmp_Gain`: `127`, flags `0x02`; `0`..`255`, step `1`, default `0`, cap flags `0x02`

### IAMCameraControl

 * `CameraControl_Exposure`: `-4`, flags `0x01`; `-9`..`0`, step `1`, default `-7`, cap flags `0x03`

### Pin: Запись

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `14`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 E0 A5 01 00 00 00 00 2A 2C 0A 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 00 00 00 00 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `230 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `27648000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `66 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `230 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 A0 8C 00 00 C0 4B 03`
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
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `9 216 000`
  * `.MaxBitsPerSecond`: `55 296 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 E1 00 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 78 69 00 00 00 00 00 2A 2C 0A 00 00 00 00 00 28 00 00 00 A0 00 00 00 78 00 00 00 01 00 18 00 00 00 00 00 00 E1 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `57 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `6912000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `66 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `160`
   * `.biHeight`: `120`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `57 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 28 23 00 00 F0 D2 00`
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
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `2 304 000`
  * `.MaxBitsPerSecond`: `13 824 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 29 01 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 38 8B 00 00 00 00 00 2A 2C 0A 00 00 00 00 00 28 00 00 00 B0 00 00 00 90 00 00 00 01 00 18 00 00 00 00 00 00 29 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `76 032`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `9123840`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `66 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `176`
   * `.biHeight`: `144`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `76 032`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 68 2E 00 00 70 16 01`
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
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `3 041 280`
  * `.MaxBitsPerSecond`: `18 247 680`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 A4 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 E0 2C 02 00 00 00 00 2A 2C 0A 00 00 00 00 00 28 00 00 00 60 01 00 00 20 01 00 00 01 00 18 00 00 00 00 00 00 A4 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `304 128`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `36495360`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `66 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `352`
   * `.biHeight`: `288`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `304 128`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 A0 B9 00 00 C0 59 04`
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
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `12 165 120`
  * `.MaxBitsPerSecond`: `72 990 720`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 97 06 00 00 00 00 2A 2C 0A 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `110592000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `66 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 80 32 02 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `36 864 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 A4 1F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 E0 D4 0E 00 00 00 00 2A 2C 0A 00 00 00 00 00 28 00 00 00 C0 03 00 00 D0 02 00 00 01 00 18 00 00 00 00 00 00 A4 1F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2 073 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `248832000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `66 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `960`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `2 073 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 C0 03 00 00 D0 02 00 00 C0 03 00 00 D0 02 00 00 C0 03 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 C0 03 00 00 D0 02 00 00 C0 03 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2A 2C 0A 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 A0 F1 04 00 E0 D4 0E`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `960` x `720`
  * `.MinCroppingSize`: `960` x `720`
  * `.MaxCroppingSize`: `960` x `720`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `960` x `720`
  * `.MaxOutputSize`: `960` x `720`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `66 6666`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `82 944 000`
  * `.MaxBitsPerSecond`: `248 832 000`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 40 38 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2F 0D 00 00 00 00 55 58 14 00 00 00 00 00 28 00 00 00 00 05 00 00 C0 03 00 00 01 00 18 00 00 00 00 00 00 40 38 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `3 686 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `133 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `960`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `3 686 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 C0 03 00 00 00 05 00 00 C0 03 00 00 00 05 00 00 C0 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 05 00 00 C0 03 00 00 00 05 00 00 C0 03 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 55 58 14 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 00 CA 08 00 00 2F 0D`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `960`
  * `.MinCroppingSize`: `1280` x `960`
  * `.MaxCroppingSize`: `1280` x `960`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1280` x `960`
  * `.MaxOutputSize`: `1280` x `960`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `133 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `147 456 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 49 34 32 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 C2 01 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 F0 D2 00 00 00 00 00 2A 2C 0A 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 0C 00 49 34 32 30 00 C2 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC I420`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `115 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `13824000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `66 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `12`
   * `.biCompression`: `808596553` `I420`
   * `.biSizeImage`: `115 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 50 46 00 00 E0 A5 01`
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
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `4 608 000`
  * `.MaxBitsPerSecond`: `27 648 000`

#### Capability: 8

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 49 34 32 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 80 70 00 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 BC 34 00 00 00 00 00 2A 2C 0A 00 00 00 00 00 28 00 00 00 A0 00 00 00 78 00 00 00 01 00 0C 00 49 34 32 30 80 70 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC I420`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `28 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `3456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `66 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `160`
   * `.biHeight`: `120`
   * `.biPlanes`: `1`
   * `.biBitCount`: `12`
   * `.biCompression`: `808596553` `I420`
   * `.biSizeImage`: `28 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 94 11 00 00 78 69 00`
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
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `1 152 000`
  * `.MaxBitsPerSecond`: `6 912 000`

#### Capability: 9

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 49 34 32 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 80 94 00 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 9C 45 00 00 00 00 00 2A 2C 0A 00 00 00 00 00 28 00 00 00 B0 00 00 00 90 00 00 00 01 00 0C 00 49 34 32 30 80 94 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC I420`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `38 016`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `4561920`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `66 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `176`
   * `.biHeight`: `144`
   * `.biPlanes`: `1`
   * `.biBitCount`: `12`
   * `.biCompression`: `808596553` `I420`
   * `.biSizeImage`: `38 016`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 34 17 00 00 38 8B 00`
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
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `1 520 640`
  * `.MaxBitsPerSecond`: `9 123 840`

#### Capability: 10

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 49 34 32 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 52 02 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 70 16 01 00 00 00 00 2A 2C 0A 00 00 00 00 00 28 00 00 00 60 01 00 00 20 01 00 00 01 00 0C 00 49 34 32 30 00 52 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC I420`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `152 064`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `18247680`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `66 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `352`
   * `.biHeight`: `288`
   * `.biPlanes`: `1`
   * `.biBitCount`: `12`
   * `.biCompression`: `808596553` `I420`
   * `.biSizeImage`: `152 064`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 D0 5C 00 00 E0 2C 02`
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
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `6 082 560`
  * `.MaxBitsPerSecond`: `36 495 360`

#### Capability: 11

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 49 34 32 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 08 07 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 C0 4B 03 00 00 00 00 2A 2C 0A 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 0C 00 49 34 32 30 00 08 07 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC I420`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `460 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `55296000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `66 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `12`
   * `.biCompression`: `808596553` `I420`
   * `.biSizeImage`: `460 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 40 19 01 00 80 97 06`
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
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `18 432 000`
  * `.MaxBitsPerSecond`: `110 592 000`

#### Capability: 12

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 49 34 32 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 D2 0F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 70 6A 07 00 00 00 00 2A 2C 0A 00 00 00 00 00 28 00 00 00 C0 03 00 00 D0 02 00 00 01 00 0C 00 49 34 32 30 00 D2 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC I420`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 036 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `124416000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `66 6666`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `960`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `12`
   * `.biCompression`: `808596553` `I420`
   * `.biSizeImage`: `1 036 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 C0 03 00 00 D0 02 00 00 C0 03 00 00 D0 02 00 00 C0 03 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 C0 03 00 00 D0 02 00 00 C0 03 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 2A 2C 0A 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 D0 78 02 00 70 6A 07`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `960` x `720`
  * `.MinCroppingSize`: `960` x `720`
  * `.MaxCroppingSize`: `960` x `720`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `960` x `720`
  * `.MaxOutputSize`: `960` x `720`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `66 6666`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `41 472 000`
  * `.MaxBitsPerSecond`: `124 416 000`

#### Capability: 13

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 49 34 32 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 97 06 00 00 00 00 55 58 14 00 00 00 00 00 28 00 00 00 00 05 00 00 C0 03 00 00 01 00 0C 00 49 34 32 30 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC I420`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 843 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `110592000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `133 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `960`
   * `.biPlanes`: `1`
   * `.biBitCount`: `12`
   * `.biCompression`: `808596553` `I420`
   * `.biSizeImage`: `1 843 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 C0 03 00 00 00 05 00 00 C0 03 00 00 00 05 00 00 C0 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 05 00 00 C0 03 00 00 00 05 00 00 C0 03 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 55 58 14 00 00 00 00 00 80 84 1E 00 00 00 00 00 00 00 65 04 00 80 97 06`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `960`
  * `.MinCroppingSize`: `1280` x `960`
  * `.MaxCroppingSize`: `1280` x `960`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1280` x `960`
  * `.MaxOutputSize`: `1280` x `960`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `133 3333`
  * `.MaxFrameInterval`: `200 0000`
  * `.MinBitsPerSecond`: `73 728 000`
  * `.MaxBitsPerSecond`: `110 592 000`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

Property Pages:

  * `{6691680C-8B1C-49EC-9254-8FFBE471C256}` - Device Information

### Pin: Терминал видеокамеры

 * Direction: `PINDIR_INPUT`
 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{1B6C4281-0353-11D1-905F-0000C0CC16B0}`
Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`
  * `IStreamBuilder`

### Pin: Неподвижно

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C428A-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_STILL`
 * Capabilities:
  * Count: `20`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 00 00 00 00 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `230 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `1 000 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `230 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 80 96 98 00 00 00 00 00 00 20 1C 00 00 20 1C 00`
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
  * `.MinFrameInterval`: `1 000 0000`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 843 200`
  * `.MaxBitsPerSecond`: `1 843 200`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 E1 00 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 28 00 00 00 A0 00 00 00 78 00 00 00 01 00 18 00 00 00 00 00 00 E1 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `57 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `1 000 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `160`
   * `.biHeight`: `120`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `57 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 80 96 98 00 00 00 00 00 00 08 07 00 00 08 07 00`
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
  * `.MinFrameInterval`: `1 000 0000`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `460 800`
  * `.MaxBitsPerSecond`: `460 800`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 29 01 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 28 00 00 00 B0 00 00 00 90 00 00 00 01 00 18 00 00 00 00 00 00 29 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `76 032`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `1 000 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `176`
   * `.biHeight`: `144`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `76 032`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 80 96 98 00 00 00 00 00 00 48 09 00 00 48 09 00`
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
  * `.MinFrameInterval`: `1 000 0000`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `608 256`
  * `.MaxBitsPerSecond`: `608 256`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 A4 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 28 00 00 00 60 01 00 00 20 01 00 00 01 00 18 00 00 00 00 00 00 A4 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `304 128`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `1 000 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `352`
   * `.biHeight`: `288`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `304 128`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 80 96 98 00 00 00 00 00 00 20 25 00 00 20 25 00`
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
  * `.MinFrameInterval`: `1 000 0000`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `2 433 024`
  * `.MaxBitsPerSecond`: `2 433 024`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `1 000 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 80 96 98 00 00 00 00 00 00 80 70 00 00 80 70 00`
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
  * `.MinFrameInterval`: `1 000 0000`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `7 372 800`
  * `.MaxBitsPerSecond`: `7 372 800`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 A4 1F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 28 00 00 00 C0 03 00 00 D0 02 00 00 01 00 18 00 00 00 00 00 00 A4 1F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2 073 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `1 000 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `960`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `2 073 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 C0 03 00 00 D0 02 00 00 C0 03 00 00 D0 02 00 00 C0 03 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 C0 03 00 00 D0 02 00 00 C0 03 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 80 96 98 00 00 00 00 00 00 20 FD 00 00 20 FD 00`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `960` x `720`
  * `.MinCroppingSize`: `960` x `720`
  * `.MaxCroppingSize`: `960` x `720`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `960` x `720`
  * `.MaxOutputSize`: `960` x `720`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `1 000 0000`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `16 588 800`
  * `.MaxBitsPerSecond`: `16 588 800`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 40 38 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 28 00 00 00 00 05 00 00 C0 03 00 00 01 00 18 00 00 00 00 00 00 40 38 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `3 686 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `1 000 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `960`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `3 686 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 C0 03 00 00 00 05 00 00 C0 03 00 00 00 05 00 00 C0 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 05 00 00 C0 03 00 00 00 05 00 00 C0 03 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 80 96 98 00 00 00 00 00 00 00 C2 01 00 00 C2 01`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `960`
  * `.MinCroppingSize`: `1280` x `960`
  * `.MaxCroppingSize`: `1280` x `960`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1280` x `960`
  * `.MaxOutputSize`: `1280` x `960`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `1 000 0000`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `29 491 200`
  * `.MaxBitsPerSecond`: `29 491 200`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 E4 57 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 28 00 00 00 40 06 00 00 B0 04 00 00 01 00 18 00 00 00 00 00 00 E4 57 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `5 760 000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `1 000 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1600`
   * `.biHeight`: `1200`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `5 760 000`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 40 06 00 00 B0 04 00 00 40 06 00 00 B0 04 00 00 40 06 00 00 B0 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 06 00 00 B0 04 00 00 40 06 00 00 B0 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 80 96 98 00 00 00 00 00 00 20 BF 02 00 20 BF 02`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1600` x `1200`
  * `.MinCroppingSize`: `1600` x `1200`
  * `.MaxCroppingSize`: `1600` x `1200`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1600` x `1200`
  * `.MaxOutputSize`: `1600` x `1200`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `1 000 0000`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `46 080 000`
  * `.MaxBitsPerSecond`: `46 080 000`

#### Capability: 8

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 00 90 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 28 00 00 00 00 08 00 00 00 06 00 00 01 00 18 00 00 00 00 00 00 00 90 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `9 437 184`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `1 000 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `2048`
   * `.biHeight`: `1536`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `9 437 184`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 08 00 00 00 06 00 00 00 08 00 00 00 06 00 00 00 08 00 00 00 06 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 08 00 00 00 06 00 00 00 08 00 00 00 06 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 80 96 98 00 00 00 00 00 00 00 80 04 00 00 80 04`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `2048` x `1536`
  * `.MinCroppingSize`: `2048` x `1536`
  * `.MaxCroppingSize`: `2048` x `1536`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `2048` x `1536`
  * `.MaxOutputSize`: `2048` x `1536`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `1 000 0000`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `75 497 472`
  * `.MaxBitsPerSecond`: `75 497 472`

#### Capability: 9

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 40 B6 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 28 00 00 00 00 09 00 00 C0 06 00 00 01 00 18 00 00 00 00 00 00 40 B6 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `11 943 936`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `1 000 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `2304`
   * `.biHeight`: `1728`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `11 943 936`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 09 00 00 C0 06 00 00 00 09 00 00 C0 06 00 00 00 09 00 00 C0 06 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 09 00 00 C0 06 00 00 00 09 00 00 C0 06 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 80 96 98 00 00 00 00 00 00 00 B2 05 00 00 B2 05`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `2304` x `1728`
  * `.MinCroppingSize`: `2304` x `1728`
  * `.MaxCroppingSize`: `2304` x `1728`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `2304` x `1728`
  * `.MaxOutputSize`: `2304` x `1728`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `1 000 0000`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `95 551 488`
  * `.MaxBitsPerSecond`: `95 551 488`

#### Capability: 10

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 49 34 32 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 C2 01 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 0C 00 49 34 32 30 00 C2 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC I420`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `115 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `1 000 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `12`
   * `.biCompression`: `808596553` `I420`
   * `.biSizeImage`: `115 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 10 0E 00`
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
  * `.MinFrameInterval`: `1 000 0000`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `921 600`

#### Capability: 11

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 49 34 32 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 80 70 00 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 28 00 00 00 A0 00 00 00 78 00 00 00 01 00 0C 00 49 34 32 30 80 70 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC I420`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `28 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `1 000 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `160`
   * `.biHeight`: `120`
   * `.biPlanes`: `1`
   * `.biBitCount`: `12`
   * `.biCompression`: `808596553` `I420`
   * `.biSizeImage`: `28 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 A0 00 00 00 78 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 80 96 98 00 00 00 00 00 00 84 03 00 00 84 03 00`
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
  * `.MinFrameInterval`: `1 000 0000`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `230 400`
  * `.MaxBitsPerSecond`: `230 400`

#### Capability: 12

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 49 34 32 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 80 94 00 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 28 00 00 00 B0 00 00 00 90 00 00 00 01 00 0C 00 49 34 32 30 80 94 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC I420`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `38 016`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `1 000 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `176`
   * `.biHeight`: `144`
   * `.biPlanes`: `1`
   * `.biBitCount`: `12`
   * `.biCompression`: `808596553` `I420`
   * `.biSizeImage`: `38 016`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 B0 00 00 00 90 00 00 00 B0 00 00 00 90 00 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 80 96 98 00 00 00 00 00 00 A4 04 00 00 A4 04 00`
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
  * `.MinFrameInterval`: `1 000 0000`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `304 128`
  * `.MaxBitsPerSecond`: `304 128`

#### Capability: 13

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 49 34 32 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 52 02 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 28 00 00 00 60 01 00 00 20 01 00 00 01 00 0C 00 49 34 32 30 00 52 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC I420`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `152 064`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `1 000 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `352`
   * `.biHeight`: `288`
   * `.biPlanes`: `1`
   * `.biBitCount`: `12`
   * `.biCompression`: `808596553` `I420`
   * `.biSizeImage`: `152 064`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 80 96 98 00 00 00 00 00 00 90 12 00 00 90 12 00`
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
  * `.MinFrameInterval`: `1 000 0000`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 216 512`
  * `.MaxBitsPerSecond`: `1 216 512`

#### Capability: 14

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 49 34 32 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 08 07 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 0C 00 49 34 32 30 00 08 07 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC I420`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `460 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `1 000 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `12`
   * `.biCompression`: `808596553` `I420`
   * `.biSizeImage`: `460 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 80 96 98 00 00 00 00 00 00 40 38 00 00 40 38 00`
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
  * `.MinFrameInterval`: `1 000 0000`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `3 686 400`
  * `.MaxBitsPerSecond`: `3 686 400`

#### Capability: 15

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 49 34 32 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 D2 0F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 28 00 00 00 C0 03 00 00 D0 02 00 00 01 00 0C 00 49 34 32 30 00 D2 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC I420`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 036 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `1 000 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `960`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `12`
   * `.biCompression`: `808596553` `I420`
   * `.biSizeImage`: `1 036 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 C0 03 00 00 D0 02 00 00 C0 03 00 00 D0 02 00 00 C0 03 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 C0 03 00 00 D0 02 00 00 C0 03 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 80 96 98 00 00 00 00 00 00 90 7E 00 00 90 7E 00`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `960` x `720`
  * `.MinCroppingSize`: `960` x `720`
  * `.MaxCroppingSize`: `960` x `720`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `960` x `720`
  * `.MaxOutputSize`: `960` x `720`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `1 000 0000`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `8 294 400`
  * `.MaxBitsPerSecond`: `8 294 400`

#### Capability: 16

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 49 34 32 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 28 00 00 00 00 05 00 00 C0 03 00 00 01 00 0C 00 49 34 32 30 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC I420`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 843 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `1 000 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `960`
   * `.biPlanes`: `1`
   * `.biBitCount`: `12`
   * `.biCompression`: `808596553` `I420`
   * `.biSizeImage`: `1 843 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 05 00 00 C0 03 00 00 00 05 00 00 C0 03 00 00 00 05 00 00 C0 03 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 05 00 00 C0 03 00 00 00 05 00 00 C0 03 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 80 96 98 00 00 00 00 00 00 00 E1 00 00 00 E1 00`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1280` x `960`
  * `.MinCroppingSize`: `1280` x `960`
  * `.MaxCroppingSize`: `1280` x `960`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1280` x `960`
  * `.MaxOutputSize`: `1280` x `960`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `1 000 0000`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `14 745 600`
  * `.MaxBitsPerSecond`: `14 745 600`

#### Capability: 17

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 49 34 32 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F2 2B 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 28 00 00 00 40 06 00 00 B0 04 00 00 01 00 0C 00 49 34 32 30 00 F2 2B 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC I420`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2 880 000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `1 000 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1600`
   * `.biHeight`: `1200`
   * `.biPlanes`: `1`
   * `.biBitCount`: `12`
   * `.biCompression`: `808596553` `I420`
   * `.biSizeImage`: `2 880 000`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 40 06 00 00 B0 04 00 00 40 06 00 00 B0 04 00 00 40 06 00 00 B0 04 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 40 06 00 00 B0 04 00 00 40 06 00 00 B0 04 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 80 96 98 00 00 00 00 00 00 90 5F 01 00 90 5F 01`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1600` x `1200`
  * `.MinCroppingSize`: `1600` x `1200`
  * `.MaxCroppingSize`: `1600` x `1200`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `1600` x `1200`
  * `.MaxOutputSize`: `1600` x `1200`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `1 000 0000`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `23 040 000`
  * `.MaxBitsPerSecond`: `23 040 000`

#### Capability: 18

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 49 34 32 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 00 48 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 28 00 00 00 00 08 00 00 00 06 00 00 01 00 0C 00 49 34 32 30 00 00 48 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC I420`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4 718 592`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `1 000 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `2048`
   * `.biHeight`: `1536`
   * `.biPlanes`: `1`
   * `.biBitCount`: `12`
   * `.biCompression`: `808596553` `I420`
   * `.biSizeImage`: `4 718 592`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 08 00 00 00 06 00 00 00 08 00 00 00 06 00 00 00 08 00 00 00 06 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 08 00 00 00 06 00 00 00 08 00 00 00 06 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 80 96 98 00 00 00 00 00 00 00 40 02 00 00 40 02`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `2048` x `1536`
  * `.MinCroppingSize`: `2048` x `1536`
  * `.MaxCroppingSize`: `2048` x `1536`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `2048` x `1536`
  * `.MaxOutputSize`: `2048` x `1536`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `1 000 0000`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `37 748 736`
  * `.MaxBitsPerSecond`: `37 748 736`

#### Capability: 19

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 49 34 32 30 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 5B 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 28 00 00 00 00 09 00 00 C0 06 00 00 01 00 0C 00 49 34 32 30 00 20 5B 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC I420`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `5 971 968`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `1 000 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `2304`
   * `.biHeight`: `1728`
   * `.biPlanes`: `1`
   * `.biBitCount`: `12`
   * `.biCompression`: `808596553` `I420`
   * `.biSizeImage`: `5 971 968`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 09 00 00 C0 06 00 00 00 09 00 00 C0 06 00 00 00 09 00 00 C0 06 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 09 00 00 C0 06 00 00 00 09 00 00 C0 06 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 96 98 00 00 00 00 00 80 96 98 00 00 00 00 00 00 00 D9 02 00 00 D9 02`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `2304` x `1728`
  * `.MinCroppingSize`: `2304` x `1728`
  * `.MaxCroppingSize`: `2304` x `1728`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `2304` x `1728`
  * `.MaxOutputSize`: `2304` x `1728`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `1 000 0000`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `47 775 744`
  * `.MaxBitsPerSecond`: `47 775 744`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

Property Pages:

  * `{6691680C-8B1C-49EC-9254-8FFBE471C256}` - Device Information

## Device: ManyCam Video Source

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\ManyCam Video Source`

Interfaces:

  * `IAMFilterMiscFlags`

### Pin: ~Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `1`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 00 00 00 00 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `230 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `230 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 E0 01 00 00 A0 00 00 00 78 00 00 00 80 02 00 00 E0 01 00 00 08 00 00 00 08 00 00 00 08 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 80 02 00 00 E0 01 00 00 08 00 00 00 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 F0 D2 00 00 E0 D4 0E`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `640` x `480`
  * `.MinCroppingSize`: `160` x `120`
  * `.MaxCroppingSize`: `640` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `160` x `120`
  * `.MaxOutputSize`: `640` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `8`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `13 824 000`
  * `.MaxBitsPerSecond`: `248 832 000`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMStreamConfig`
  * `IAMStreamControl`

## Device: My Webcam

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\My Webcam`

Interfaces:

  * `IAMFilterMiscFlags`

### Pin: ~Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `1`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 F9 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 1A 06 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 00 00 00 00 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `230 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `40 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `230 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 80 02 00 00 E0 01 00 00 A0 00 00 00 78 00 00 00 80 02 00 00 E0 01 00 00 08 00 00 00 08 00 00 00 08 00 00 00 01 00 00 00 A0 00 00 00 78 00 00 00 80 02 00 00 E0 01 00 00 08 00 00 00 08 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 63 17 05 00 00 00 00 00 00 A0 25 26 00 00 00 00 00 F0 D2 00 00 E0 D4 0E`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `640` x `480`
  * `.MinCroppingSize`: `160` x `120`
  * `.MaxCroppingSize`: `640` x `480`
  * `.CropGranularityX`: `8`
  * `.CropAlignX`: `8`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `160` x `120`
  * `.MaxOutputSize`: `640` x `480`
  * `.OutputGranularityX`: `8`
  * `.OutputGranularityY`: `8`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3667`
  * `.MaxFrameInterval`: `64 000 0000`
  * `.MinBitsPerSecond`: `13 824 000`
  * `.MaxBitsPerSecond`: `248 832 000`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMStreamConfig`
  * `IAMStreamControl`

## Device: VisioForge Network Source Video

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\VisioForge Network Source Video`

Interfaces:

  * `IAMFilterMiscFlags`

### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `23`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 00 18 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 00 04 00 00 00 03 00 00 01 00 10 00 59 55 59 32 00 00 18 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 572 864`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1024`
   * `.biHeight`: `768`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `1 572 864`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `9`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `995 328 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 C2 01 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 40 01 00 00 B4 00 00 00 01 00 10 00 59 55 59 32 00 C2 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `115 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `180`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `115 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `9`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `995 328 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 80 F4 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 E0 01 00 00 0E 01 00 00 01 00 10 00 59 55 59 32 80 F4 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `259 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `480`
   * `.biHeight`: `270`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `259 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `9`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `995 328 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 08 07 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 80 02 00 00 68 01 00 00 01 00 10 00 59 55 59 32 00 08 07 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `460 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `360`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `460 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `9`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `995 328 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 80 FC 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 20 03 00 00 C2 01 00 00 01 00 10 00 59 55 59 32 80 FC 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `720 000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `800`
   * `.biHeight`: `450`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `720 000`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `9`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `995 328 000`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 D2 0F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 C0 03 00 00 1C 02 00 00 01 00 10 00 59 55 59 32 00 D2 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 036 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `960`
   * `.biHeight`: `540`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `1 036 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `9`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `995 328 000`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 80 88 15 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 60 04 00 00 76 02 00 00 01 00 10 00 59 55 59 32 80 88 15 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 411 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1120`
   * `.biHeight`: `630`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `1 411 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `9`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `995 328 000`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 59 55 59 32 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 843 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `1 843 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `9`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `995 328 000`

#### Capability: 8

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 80 98 23 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 A0 05 00 00 2A 03 00 00 01 00 10 00 59 55 59 32 80 98 23 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2 332 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1440`
   * `.biHeight`: `810`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `2 332 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `9`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `995 328 000`

#### Capability: 9

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F2 2B 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 40 06 00 00 84 03 00 00 01 00 10 00 59 55 59 32 00 F2 2B 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2 880 000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1600`
   * `.biHeight`: `900`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `2 880 000`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `9`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `995 328 000`

#### Capability: 10

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 80 2C 35 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 E0 06 00 00 DE 03 00 00 01 00 10 00 59 55 59 32 80 2C 35 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `3 484 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1760`
   * `.biHeight`: `990`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `3 484 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `9`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `995 328 000`

#### Capability: 11

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 59 55 59 32 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4 147 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `4 147 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

#### Capability: 12

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 58 02 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 10 00 59 55 59 32 00 58 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `153 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `153 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

#### Capability: 13

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 46 05 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 E0 01 00 00 68 01 00 00 01 00 10 00 59 55 59 32 00 46 05 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `345 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `480`
   * `.biHeight`: `360`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `345 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

#### Capability: 14

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 59 55 59 32 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `614 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

#### Capability: 15

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A6 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 20 03 00 00 58 02 00 00 01 00 10 00 59 55 59 32 00 A6 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `960 000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `800`
   * `.biHeight`: `600`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `960 000`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

#### Capability: 16

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 18 15 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 C0 03 00 00 D0 02 00 00 01 00 10 00 59 55 59 32 00 18 15 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 382 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `960`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `1 382 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

#### Capability: 17

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 B6 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 60 04 00 00 48 03 00 00 01 00 10 00 59 55 59 32 00 B6 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 881 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1120`
   * `.biHeight`: `840`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `1 881 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

#### Capability: 18

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 80 25 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 00 05 00 00 C0 03 00 00 01 00 10 00 59 55 59 32 00 80 25 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2 457 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `960`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `2 457 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

#### Capability: 19

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 76 2F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 A0 05 00 00 38 04 00 00 01 00 10 00 59 55 59 32 00 76 2F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `3 110 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1440`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `3 110 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

#### Capability: 20

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 98 3A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 40 06 00 00 B0 04 00 00 01 00 10 00 59 55 59 32 00 98 3A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `3 840 000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1600`
   * `.biHeight`: `1200`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `3 840 000`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

#### Capability: 21

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 E6 46 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 E0 06 00 00 28 05 00 00 01 00 10 00 59 55 59 32 00 E6 46 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4 646 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1760`
   * `.biHeight`: `1320`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `4 646 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

#### Capability: 22

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 54 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 80 07 00 00 A0 05 00 00 01 00 10 00 59 55 59 32 00 60 54 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `5 529 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1440`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `5 529 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 A4 03 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

## Device: VisioForge Virtual Camera

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\VisioForge Virtual Camera`

Interfaces:

  * `IAMFilterMiscFlags`

### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `23`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 00 18 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 00 04 00 00 00 03 00 00 01 00 10 00 59 55 59 32 00 00 18 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 572 864`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1024`
   * `.biHeight`: `768`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `1 572 864`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `9`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `995 328 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 C2 01 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 40 01 00 00 B4 00 00 00 01 00 10 00 59 55 59 32 00 C2 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `115 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `180`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `115 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `9`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `995 328 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 80 F4 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 E0 01 00 00 0E 01 00 00 01 00 10 00 59 55 59 32 80 F4 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `259 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `480`
   * `.biHeight`: `270`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `259 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `9`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `995 328 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 08 07 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 80 02 00 00 68 01 00 00 01 00 10 00 59 55 59 32 00 08 07 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `460 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `360`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `460 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `9`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `995 328 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 80 FC 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 20 03 00 00 C2 01 00 00 01 00 10 00 59 55 59 32 80 FC 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `720 000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `800`
   * `.biHeight`: `450`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `720 000`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `9`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `995 328 000`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 D2 0F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 C0 03 00 00 1C 02 00 00 01 00 10 00 59 55 59 32 00 D2 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 036 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `960`
   * `.biHeight`: `540`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `1 036 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `9`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `995 328 000`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 80 88 15 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 60 04 00 00 76 02 00 00 01 00 10 00 59 55 59 32 80 88 15 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 411 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1120`
   * `.biHeight`: `630`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `1 411 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `9`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `995 328 000`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 59 55 59 32 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 843 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `1 843 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `9`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `995 328 000`

#### Capability: 8

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 80 98 23 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 A0 05 00 00 2A 03 00 00 01 00 10 00 59 55 59 32 80 98 23 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2 332 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1440`
   * `.biHeight`: `810`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `2 332 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `9`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `995 328 000`

#### Capability: 9

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 F2 2B 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 40 06 00 00 84 03 00 00 01 00 10 00 59 55 59 32 00 F2 2B 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2 880 000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1600`
   * `.biHeight`: `900`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `2 880 000`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `9`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `995 328 000`

#### Capability: 10

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 80 2C 35 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 E0 06 00 00 DE 03 00 00 01 00 10 00 59 55 59 32 80 2C 35 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `3 484 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1760`
   * `.biHeight`: `990`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `3 484 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 B4 00 00 00 80 07 00 00 38 04 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 10 0E 00 00 80 53 3B`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `180`
  * `.MaxCroppingSize`: `1920` x `1080`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `180`
  * `.MaxOutputSize`: `1920` x `1080`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `9`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `921 600`
  * `.MaxBitsPerSecond`: `995 328 000`

#### Capability: 11

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 48 3F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 10 00 59 55 59 32 00 48 3F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4 147 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `4 147 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

#### Capability: 12

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 58 02 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 10 00 59 55 59 32 00 58 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `153 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `153 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

#### Capability: 13

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 46 05 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 E0 01 00 00 68 01 00 00 01 00 10 00 59 55 59 32 00 46 05 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `345 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `480`
   * `.biHeight`: `360`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `345 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

#### Capability: 14

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 59 55 59 32 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `614 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

#### Capability: 15

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A6 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 20 03 00 00 58 02 00 00 01 00 10 00 59 55 59 32 00 A6 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `960 000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `800`
   * `.biHeight`: `600`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `960 000`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

#### Capability: 16

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 18 15 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 C0 03 00 00 D0 02 00 00 01 00 10 00 59 55 59 32 00 18 15 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 382 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `960`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `1 382 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

#### Capability: 17

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 B6 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 60 04 00 00 48 03 00 00 01 00 10 00 59 55 59 32 00 B6 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 881 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1120`
   * `.biHeight`: `840`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `1 881 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

#### Capability: 18

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 80 25 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 00 05 00 00 C0 03 00 00 01 00 10 00 59 55 59 32 00 80 25 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2 457 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `960`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `2 457 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

#### Capability: 19

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 76 2F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 A0 05 00 00 38 04 00 00 01 00 10 00 59 55 59 32 00 76 2F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `3 110 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1440`
   * `.biHeight`: `1080`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `3 110 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

#### Capability: 20

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 98 3A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 40 06 00 00 B0 04 00 00 01 00 10 00 59 55 59 32 00 98 3A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `3 840 000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1600`
   * `.biHeight`: `1200`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `3 840 000`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

#### Capability: 21

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 E6 46 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 E0 06 00 00 28 05 00 00 01 00 10 00 59 55 59 32 00 E6 46 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `4 646 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1760`
   * `.biHeight`: `1320`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `4 646 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

#### Capability: 22

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 55 59 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 54 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FA 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 80 07 00 00 A0 05 00 00 01 00 10 00 59 55 59 32 00 60 54 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC YUY2`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `5 529 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`0`, `0`)
  * `.rcTarget`: (`0`, `0`) - (`0`, `0`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1920`
   * `.biHeight`: `1440`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `844715353` `YUY2`
   * `.biSizeImage`: `5 529 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 00 04 00 00 00 03 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 80 07 00 00 A0 05 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 40 A3 00 00 15 16 05 00 00 00 00 00 80 96 98 00 00 00 00 00 00 C0 12 00 00 00 1A 4F`
  * `.guid`: `{05589F80-C356-11CE-BF01-00AA0055595A}`
  * `.VideoStandard`: `0`
  * `.InputSize`: `1024` x `768`
  * `.MinCroppingSize`: `320` x `240`
  * `.MaxCroppingSize`: `1920` x `1440`
  * `.CropGranularityX`: `16`
  * `.CropAlignX`: `0`
  * `.CropAlignY`: `0`
  * `.MinOutputSize`: `320` x `240`
  * `.MaxOutputSize`: `1920` x `1440`
  * `.OutputGranularityX`: `16`
  * `.OutputGranularityY`: `12`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `1 000 0000`
  * `.MinBitsPerSecond`: `1 228 800`
  * `.MaxBitsPerSecond`: `1 327 104 000`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

## Device: IP Camera [JPEG/MJPEG]

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{1A2C1D86-0A25-4048-88B4-C4EF6FD0B872}`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMCameraControl`

Property Pages:

  * `{E5FB9A73-A06A-495D-9448-F2E14FE47107}`

### IAMCameraControl

 * `CameraControl_Pan`: `200`, flags `0x1374018`; `0`..`400`, step `1`, default `1`, cap flags `0x5C21D8`
 * `CameraControl_Tilt`: `150`, flags `0x1374018`; `0`..`300`, step `1`, default `1`, cap flags `0x5C21D8`
 * `CameraControl_Roll`: `150`, flags `0x1374018`; `0`..`300`, step `1`, default `1`, cap flags `0x5C21D8`
 * `CameraControl_Zoom`: `50`, flags `0x1374018`; `0`..`100`, step `1`, default `1`, cap flags `0x5C21D8`
 * `CameraControl_Exposure`: `50`, flags `0x1374018`; `0`..`100`, step `1`, default `1`, cap flags `0x5C21D8`
 * `CameraControl_Iris`: `50`, flags `0x1374018`; `0`..`100`, step `1`, default `1`, cap flags `0x5C21D8`
 * `CameraControl_Focus`: `50`, flags `0x1374018`; `0`..`100`, step `1`, default `1`, cap flags `0x5C21D8`

### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `10`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 FF FF FF FF 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 78 FC 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `-1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * Unknown Capabilities:
  * Type: `{058D0020-7BD0-0008-0040-3701E03D0400}`
  * Data: `20 00 8D 05 D0 7B 08 00 00 40 37 01 E0 3D 04 00 CC 20 02 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 04 00 00 00 04 00 00 00 02 00 00 00 02 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 CA 6B 00 00 00 00 00 00 2C D7 00 01 76 05 34 01 00 00 57 00 00 00 01 01 5C D6 2C 00`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 FF FF FF FF 00 00 00 00 00 84 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FC 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 40 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 40 01 00 00 F0 00 00 00 01 00 18 00 00 00 00 00 00 84 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `-1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `230 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`320`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`320`, `240`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `320`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `230 400`
 * Unknown Capabilities:
  * Type: `{058D0020-7BD0-0008-0040-3701E03D0400}`
  * Data: `20 00 8D 05 D0 7B 08 00 00 40 37 01 E0 3D 04 00 CC 20 02 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 04 00 00 00 04 00 00 00 02 00 00 00 02 00 00 00 40 01 00 00 F0 00 00 00 40 01 00 00 F0 00 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 CA 6B 00 00 00 00 00 00 2C D7 00 01 76 05 34 01 00 00 57 00 00 00 01 01 5C D6 2C 00`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 FF FF FF FF 00 00 00 00 00 DE 03 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 38 FD 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 60 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 60 01 00 00 F0 00 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 60 01 00 00 F0 00 00 00 01 00 18 00 00 00 00 00 00 DE 03 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `-1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `253 440`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`352`, `240`)
  * `.rcTarget`: (`0`, `0`) - (`352`, `240`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `352`
   * `.biHeight`: `240`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `253 440`
 * Unknown Capabilities:
  * Type: `{058D0020-7BD0-0008-0040-3701E03D0400}`
  * Data: `20 00 8D 05 D0 7B 08 00 00 40 37 01 E0 3D 04 00 CC 20 02 00 60 01 00 00 F0 00 00 00 60 01 00 00 F0 00 00 00 60 01 00 00 F0 00 00 00 04 00 00 00 04 00 00 00 02 00 00 00 02 00 00 00 60 01 00 00 F0 00 00 00 60 01 00 00 F0 00 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 CA 6B 00 00 00 00 00 00 2C D7 00 01 76 05 34 01 00 00 57 00 00 00 01 01 5C D6 2C 00`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 FF FF FF FF 00 00 00 00 00 A4 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 98 FD 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 60 01 00 00 20 01 00 00 00 00 00 00 00 00 00 00 60 01 00 00 20 01 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 60 01 00 00 20 01 00 00 01 00 18 00 00 00 00 00 00 A4 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `-1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `304 128`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`352`, `288`)
  * `.rcTarget`: (`0`, `0`) - (`352`, `288`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `352`
   * `.biHeight`: `288`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `304 128`
 * Unknown Capabilities:
  * Type: `{058D0020-7BD0-0008-0040-3701E03D0400}`
  * Data: `20 00 8D 05 D0 7B 08 00 00 40 37 01 E0 3D 04 00 CC 20 02 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 04 00 00 00 04 00 00 00 02 00 00 00 02 00 00 00 60 01 00 00 20 01 00 00 60 01 00 00 20 01 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 CA 6B 00 00 00 00 00 00 2C D7 00 01 76 05 34 01 00 00 57 00 00 00 01 01 5C D6 2C 00`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 FF FF FF FF 00 00 00 00 40 7E 05 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 F8 FD 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 90 01 00 00 2C 01 00 00 00 00 00 00 00 00 00 00 90 01 00 00 2C 01 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 90 01 00 00 2C 01 00 00 01 00 18 00 00 00 00 00 40 7E 05 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `-1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `360 000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`400`, `300`)
  * `.rcTarget`: (`0`, `0`) - (`400`, `300`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `400`
   * `.biHeight`: `300`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `360 000`
 * Unknown Capabilities:
  * Type: `{058D0020-7BD0-0008-0040-3701E03D0400}`
  * Data: `20 00 8D 05 D0 7B 08 00 00 40 37 01 E0 3D 04 00 CC 20 02 00 90 01 00 00 2C 01 00 00 90 01 00 00 2C 01 00 00 90 01 00 00 2C 01 00 00 04 00 00 00 04 00 00 00 02 00 00 00 02 00 00 00 90 01 00 00 2C 01 00 00 90 01 00 00 2C 01 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 CA 6B 00 00 00 00 00 00 2C D7 00 01 76 05 34 01 00 00 57 00 00 00 01 01 5C D6 2C 00`

#### Capability: 5

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 FF FF FF FF 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 58 FE 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `-1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * Unknown Capabilities:
  * Type: `{058D0020-7BD0-0008-0040-3701E03D0400}`
  * Data: `20 00 8D 05 D0 7B 08 00 00 40 37 01 E0 3D 04 00 CC 20 02 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 04 00 00 00 04 00 00 00 02 00 00 00 02 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 CA 6B 00 00 00 00 00 00 2C D7 00 01 76 05 34 01 00 00 57 00 00 00 01 01 5C D6 2C 00`

#### Capability: 6

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 FF FF FF FF 00 00 00 00 00 78 0F 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 B8 FE 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 C0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 C0 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 C0 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 78 0F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `-1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 013 760`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`704`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`704`, `480`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `704`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 013 760`
 * Unknown Capabilities:
  * Type: `{058D0020-7BD0-0008-0040-3701E03D0400}`
  * Data: `20 00 8D 05 D0 7B 08 00 00 40 37 01 E0 3D 04 00 CC 20 02 00 C0 02 00 00 E0 01 00 00 C0 02 00 00 E0 01 00 00 C0 02 00 00 E0 01 00 00 04 00 00 00 04 00 00 00 02 00 00 00 02 00 00 00 C0 02 00 00 E0 01 00 00 C0 02 00 00 E0 01 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 CA 6B 00 00 00 00 00 00 2C D7 00 01 76 05 34 01 00 00 57 00 00 00 01 01 5C D6 2C 00`

#### Capability: 7

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 FF FF FF FF 00 00 00 00 00 90 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 18 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 C0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 C0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 C0 02 00 00 40 02 00 00 01 00 18 00 00 00 00 00 00 90 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `-1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 216 512`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`704`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`704`, `576`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `704`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 216 512`
 * Unknown Capabilities:
  * Type: `{058D0020-7BD0-0008-0040-3701E03D0400}`
  * Data: `20 00 8D 05 D0 7B 08 00 00 40 37 01 E0 3D 04 00 CC 20 02 00 C0 02 00 00 40 02 00 00 C0 02 00 00 40 02 00 00 C0 02 00 00 40 02 00 00 04 00 00 00 04 00 00 00 02 00 00 00 02 00 00 00 C0 02 00 00 40 02 00 00 C0 02 00 00 40 02 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 CA 6B 00 00 00 00 00 00 2C D7 00 01 76 05 34 01 00 00 57 00 00 00 01 01 5C D6 2C 00`

#### Capability: 8

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 FF FF FF FF 00 00 00 00 00 F9 15 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 78 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 20 03 00 00 58 02 00 00 00 00 00 00 00 00 00 00 20 03 00 00 58 02 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 20 03 00 00 58 02 00 00 01 00 18 00 00 00 00 00 00 F9 15 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `-1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 440 000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`800`, `600`)
  * `.rcTarget`: (`0`, `0`) - (`800`, `600`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `800`
   * `.biHeight`: `600`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 440 000`
 * Unknown Capabilities:
  * Type: `{058D0020-7BD0-0008-0040-3701E03D0400}`
  * Data: `20 00 8D 05 D0 7B 08 00 00 40 37 01 E0 3D 04 00 CC 20 02 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 04 00 00 00 04 00 00 00 02 00 00 00 02 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 CA 6B 00 00 00 00 00 00 2C D7 00 01 76 05 34 01 00 00 57 00 00 00 01 01 5C D6 2C 00`

#### Capability: 9

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 FF FF FF FF 00 00 00 00 00 00 24 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 03 00 00 00 00 00 00 00 00 00 00 20 A1 07 00 00 00 00 00 28 00 00 00 00 04 00 00 00 03 00 00 01 00 18 00 00 00 00 00 00 00 24 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `-1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2 359 296`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`1024`, `768`)
  * `.rcTarget`: (`0`, `0`) - (`1024`, `768`)
  * `.dwBitRate`: `0`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `50 0000`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1024`
   * `.biHeight`: `768`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `2 359 296`
 * Unknown Capabilities:
  * Type: `{058D0020-7BD0-0008-0040-3701E03D0400}`
  * Data: `20 00 8D 05 D0 7B 08 00 00 40 37 01 E0 3D 04 00 CC 20 02 00 00 04 00 00 00 03 00 00 00 04 00 00 00 03 00 00 00 04 00 00 00 03 00 00 04 00 00 00 04 00 00 00 02 00 00 00 02 00 00 00 00 04 00 00 00 03 00 00 00 04 00 00 00 03 00 00 10 00 00 00 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 CA 6B 00 00 00 00 00 00 2C D7 00 01 76 05 34 01 00 00 57 00 00 00 01 01 5C D6 2C 00`

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMStreamConfig`

Exception

## Device: Link2Cam

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{570757C1-D2D8-42D1-BA0C-24E1BED3F62F}`
## Device: FR Wb

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}-005`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{A3DC0391-9A3E-43A0-88BB-BCC82A0AC5F2}` - Alax.Info JPEG Video Source General Property Page

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `5`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 49 4A 30 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 65 04 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 41 49 4A 30 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC AIJ0`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `73728000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `0`
   * `.biCompression`: `810174785` `AIJ0`
   * `.biSizeImage`: `307 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 65 04 00 00 65 04`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `73 728 000`
  * `.MaxBitsPerSecond`: `73 728 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 4D 4A 50 47 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `614 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 CA 08 00 00 CA 08`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `147 456 000`
  * `.MaxBitsPerSecond`: `147 456 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 94 11 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 228 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `294912000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 228 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 94 11 00 00 94 11`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `294 912 000`
  * `.MaxBitsPerSecond`: `294 912 000`

Interfaces:

  * `IKsPropertySet`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`

## Device: UA Vinnitsya Roshen

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}-007`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{A3DC0391-9A3E-43A0-88BB-BCC82A0AC5F2}` - Alax.Info JPEG Video Source General Property Page

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `5`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 F9 15 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 20 03 00 00 58 02 00 00 00 00 00 00 00 00 00 00 20 03 00 00 58 02 00 00 00 70 99 14 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 20 03 00 00 58 02 00 00 01 00 18 00 00 00 00 00 00 F9 15 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 440 000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`800`, `600`)
  * `.rcTarget`: (`0`, `0`) - (`800`, `600`)
  * `.dwBitRate`: `345600000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `800`
   * `.biHeight`: `600`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 440 000`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 70 99 14 00 70 99 14`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `345 600 000`
  * `.MaxBitsPerSecond`: `345 600 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 49 4A 30 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 53 07 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 20 03 00 00 58 02 00 00 00 00 00 00 00 00 00 00 20 03 00 00 58 02 00 00 00 D0 DD 06 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 20 03 00 00 58 02 00 00 01 00 00 00 41 49 4A 30 00 53 07 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC AIJ0`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `480 000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`800`, `600`)
  * `.rcTarget`: (`0`, `0`) - (`800`, `600`)
  * `.dwBitRate`: `115200000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `800`
   * `.biHeight`: `600`
   * `.biPlanes`: `1`
   * `.biBitCount`: `0`
   * `.biCompression`: `810174785` `AIJ0`
   * `.biSizeImage`: `480 000`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 D0 DD 06 00 D0 DD 06`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `115 200 000`
  * `.MaxBitsPerSecond`: `115 200 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 A6 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 20 03 00 00 58 02 00 00 00 00 00 00 00 00 00 00 20 03 00 00 58 02 00 00 00 A0 BB 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 20 03 00 00 58 02 00 00 01 00 10 00 4D 4A 50 47 00 A6 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `960 000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`800`, `600`)
  * `.rcTarget`: (`0`, `0`) - (`800`, `600`)
  * `.dwBitRate`: `230400000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `800`
   * `.biHeight`: `600`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `960 000`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 A0 BB 0D 00 A0 BB 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `230 400 000`
  * `.MaxBitsPerSecond`: `230 400 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 F9 15 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 20 03 00 00 58 02 00 00 00 00 00 00 00 00 00 00 20 03 00 00 58 02 00 00 00 70 99 14 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 20 03 00 00 58 02 00 00 01 00 18 00 00 00 00 00 00 F9 15 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 440 000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`800`, `600`)
  * `.rcTarget`: (`0`, `0`) - (`800`, `600`)
  * `.dwBitRate`: `345600000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `800`
   * `.biHeight`: `600`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 440 000`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 70 99 14 00 70 99 14`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `345 600 000`
  * `.MaxBitsPerSecond`: `345 600 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 4C 1D 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 20 03 00 00 58 02 00 00 00 00 00 00 00 00 00 00 20 03 00 00 58 02 00 00 00 40 77 1B 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 20 03 00 00 58 02 00 00 01 00 20 00 00 00 00 00 00 4C 1D 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 920 000`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`800`, `600`)
  * `.rcTarget`: (`0`, `0`) - (`800`, `600`)
  * `.dwBitRate`: `460800000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `800`
   * `.biHeight`: `600`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 920 000`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 20 03 00 00 58 02 00 00 20 03 00 00 58 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 40 77 1B 00 40 77 1B`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `460 800 000`
  * `.MaxBitsPerSecond`: `460 800 000`

Interfaces:

  * `IKsPropertySet`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`

## Device: webcam.magic.iac.es

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}-008`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{A3DC0391-9A3E-43A0-88BB-BCC82A0AC5F2}` - Alax.Info JPEG Video Source General Property Page

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `5`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 49 4A 30 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 65 04 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 41 49 4A 30 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC AIJ0`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `73728000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `0`
   * `.biCompression`: `810174785` `AIJ0`
   * `.biSizeImage`: `307 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 65 04 00 00 65 04`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `73 728 000`
  * `.MaxBitsPerSecond`: `73 728 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 4D 4A 50 47 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `614 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 CA 08 00 00 CA 08`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `147 456 000`
  * `.MaxBitsPerSecond`: `147 456 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 94 11 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 228 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `294912000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 228 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 94 11 00 00 94 11`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `294 912 000`
  * `.MaxBitsPerSecond`: `294 912 000`

Interfaces:

  * `IKsPropertySet`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`

## Device: Basein sec cam

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}-009`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{A3DC0391-9A3E-43A0-88BB-BCC82A0AC5F2}` - Alax.Info JPEG Video Source General Property Page

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `5`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 49 4A 30 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 65 04 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 41 49 4A 30 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC AIJ0`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `73728000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `0`
   * `.biCompression`: `810174785` `AIJ0`
   * `.biSizeImage`: `307 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 65 04 00 00 65 04`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `73 728 000`
  * `.MaxBitsPerSecond`: `73 728 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 4D 4A 50 47 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `614 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 CA 08 00 00 CA 08`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `147 456 000`
  * `.MaxBitsPerSecond`: `147 456 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 94 11 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 228 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `294912000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 228 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 94 11 00 00 94 11`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `294 912 000`
  * `.MaxBitsPerSecond`: `294 912 000`

Interfaces:

  * `IKsPropertySet`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`

## Device: Steyr Tabor

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}-010`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{A3DC0391-9A3E-43A0-88BB-BCC82A0AC5F2}` - Alax.Info JPEG Video Source General Property Page

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `5`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 49 4A 30 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 65 04 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 41 49 4A 30 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC AIJ0`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `73728000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `0`
   * `.biCompression`: `810174785` `AIJ0`
   * `.biSizeImage`: `307 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 65 04 00 00 65 04`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `73 728 000`
  * `.MaxBitsPerSecond`: `73 728 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 4D 4A 50 47 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `614 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 CA 08 00 00 CA 08`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `147 456 000`
  * `.MaxBitsPerSecond`: `147 456 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 94 11 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 228 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `294912000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 228 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 94 11 00 00 94 11`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `294 912 000`
  * `.MaxBitsPerSecond`: `294 912 000`

Interfaces:

  * `IKsPropertySet`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`

## Device: US HD umich.edu

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}-018`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{A3DC0391-9A3E-43A0-88BB-BCC82A0AC5F2}` - Alax.Info JPEG Video Source General Property Page

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `5`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 30 2A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 00 8D 27 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 18 00 00 00 00 00 00 30 2A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2 764 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`1280`, `720`)
  * `.rcTarget`: (`0`, `0`) - (`1280`, `720`)
  * `.dwBitRate`: `663552000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `2 764 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 8D 27 00 00 8D 27`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `663 552 000`
  * `.MaxBitsPerSecond`: `663 552 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 49 4A 30 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 41 49 4A 30 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC AIJ0`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`1280`, `720`)
  * `.rcTarget`: (`0`, `0`) - (`1280`, `720`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `0`
   * `.biCompression`: `810174785` `AIJ0`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 1C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 00 5E 1A 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 10 00 4D 4A 50 47 00 20 1C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 843 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`1280`, `720`)
  * `.rcTarget`: (`0`, `0`) - (`1280`, `720`)
  * `.dwBitRate`: `442368000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `1 843 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 5E 1A 00 00 5E 1A`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `442 368 000`
  * `.MaxBitsPerSecond`: `442 368 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 30 2A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 00 8D 27 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 18 00 00 00 00 00 00 30 2A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `2 764 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`1280`, `720`)
  * `.rcTarget`: (`0`, `0`) - (`1280`, `720`)
  * `.dwBitRate`: `663552000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `2 764 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 8D 27 00 00 8D 27`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `663 552 000`
  * `.MaxBitsPerSecond`: `663 552 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 40 38 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 00 00 00 00 00 00 00 00 05 00 00 D0 02 00 00 00 00 BC 34 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 00 05 00 00 D0 02 00 00 01 00 20 00 00 00 00 00 00 40 38 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `3 686 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`1280`, `720`)
  * `.rcTarget`: (`0`, `0`) - (`1280`, `720`)
  * `.dwBitRate`: `884736000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `1280`
   * `.biHeight`: `720`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `3 686 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 00 05 00 00 D0 02 00 00 00 05 00 00 D0 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 BC 34 00 00 BC 34`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `884 736 000`
  * `.MaxBitsPerSecond`: `884 736 000`

Interfaces:

  * `IKsPropertySet`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`

## Device: UA Ялта Интурист

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}-020`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{A3DC0391-9A3E-43A0-88BB-BCC82A0AC5F2}` - Alax.Info JPEG Video Source General Property Page

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `5`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 49 4A 30 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 65 04 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 41 49 4A 30 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC AIJ0`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `73728000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `0`
   * `.biCompression`: `810174785` `AIJ0`
   * `.biSizeImage`: `307 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 65 04 00 00 65 04`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `73 728 000`
  * `.MaxBitsPerSecond`: `73 728 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 4D 4A 50 47 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `614 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 CA 08 00 00 CA 08`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `147 456 000`
  * `.MaxBitsPerSecond`: `147 456 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 94 11 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 228 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `294912000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 228 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 94 11 00 00 94 11`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `294 912 000`
  * `.MaxBitsPerSecond`: `294 912 000`

Interfaces:

  * `IKsPropertySet`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`

## Device: City cam

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}-023`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{A3DC0391-9A3E-43A0-88BB-BCC82A0AC5F2}` - Alax.Info JPEG Video Source General Property Page

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `5`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 49 4A 30 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 65 04 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 41 49 4A 30 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC AIJ0`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `73728000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `0`
   * `.biCompression`: `810174785` `AIJ0`
   * `.biSizeImage`: `307 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 65 04 00 00 65 04`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `73 728 000`
  * `.MaxBitsPerSecond`: `73 728 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 4D 4A 50 47 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `614 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 CA 08 00 00 CA 08`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `147 456 000`
  * `.MaxBitsPerSecond`: `147 456 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 94 11 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 228 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `294912000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 228 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 94 11 00 00 94 11`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `294 912 000`
  * `.MaxBitsPerSecond`: `294 912 000`

Interfaces:

  * `IKsPropertySet`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`

## Device: US Fairbanks Alaska

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}-025`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{A3DC0391-9A3E-43A0-88BB-BCC82A0AC5F2}` - Alax.Info JPEG Video Source General Property Page

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `5`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 49 4A 30 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 65 04 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 41 49 4A 30 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC AIJ0`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `73728000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `0`
   * `.biCompression`: `810174785` `AIJ0`
   * `.biSizeImage`: `307 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 65 04 00 00 65 04`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `73 728 000`
  * `.MaxBitsPerSecond`: `73 728 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 4D 4A 50 47 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `614 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 CA 08 00 00 CA 08`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `147 456 000`
  * `.MaxBitsPerSecond`: `147 456 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 94 11 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 228 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `294912000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 228 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 94 11 00 00 94 11`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `294 912 000`
  * `.MaxBitsPerSecond`: `294 912 000`

Interfaces:

  * `IKsPropertySet`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`

## Device: RU Saint Peterburg

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}-027`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{A3DC0391-9A3E-43A0-88BB-BCC82A0AC5F2}` - Alax.Info JPEG Video Source General Property Page

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `5`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 49 4A 30 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 65 04 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 41 49 4A 30 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC AIJ0`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `73728000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `0`
   * `.biCompression`: `810174785` `AIJ0`
   * `.biSizeImage`: `307 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 65 04 00 00 65 04`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `73 728 000`
  * `.MaxBitsPerSecond`: `73 728 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 4D 4A 50 47 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `614 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 CA 08 00 00 CA 08`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `147 456 000`
  * `.MaxBitsPerSecond`: `147 456 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 94 11 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 228 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `294912000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 228 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 94 11 00 00 94 11`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `294 912 000`
  * `.MaxBitsPerSecond`: `294 912 000`

Interfaces:

  * `IKsPropertySet`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`

## Device: Proposed Shop

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}-028`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{A3DC0391-9A3E-43A0-88BB-BCC82A0AC5F2}` - Alax.Info JPEG Video Source General Property Page

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `5`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 49 4A 30 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 65 04 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 41 49 4A 30 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC AIJ0`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `73728000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `0`
   * `.biCompression`: `810174785` `AIJ0`
   * `.biSizeImage`: `307 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 65 04 00 00 65 04`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `73 728 000`
  * `.MaxBitsPerSecond`: `73 728 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 4D 4A 50 47 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `614 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 CA 08 00 00 CA 08`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `147 456 000`
  * `.MaxBitsPerSecond`: `147 456 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 94 11 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 228 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `294912000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 228 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 94 11 00 00 94 11`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `294 912 000`
  * `.MaxBitsPerSecond`: `294 912 000`

Interfaces:

  * `IKsPropertySet`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`

## Device: XZ Night

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}-029`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{A3DC0391-9A3E-43A0-88BB-BCC82A0AC5F2}` - Alax.Info JPEG Video Source General Property Page

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `5`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 49 4A 30 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 65 04 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 41 49 4A 30 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC AIJ0`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `73728000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `0`
   * `.biCompression`: `810174785` `AIJ0`
   * `.biSizeImage`: `307 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 65 04 00 00 65 04`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `73 728 000`
  * `.MaxBitsPerSecond`: `73 728 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 4D 4A 50 47 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `614 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 CA 08 00 00 CA 08`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `147 456 000`
  * `.MaxBitsPerSecond`: `147 456 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 94 11 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 228 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `294912000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 228 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 94 11 00 00 94 11`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `294 912 000`
  * `.MaxBitsPerSecond`: `294 912 000`

Interfaces:

  * `IKsPropertySet`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`

## Device: Water cam

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}-032`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{A3DC0391-9A3E-43A0-88BB-BCC82A0AC5F2}` - Alax.Info JPEG Video Source General Property Page

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `5`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 E9 07 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 E0 01 00 00 68 01 00 00 00 00 00 00 00 00 00 00 E0 01 00 00 68 01 00 00 00 70 6A 07 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 E0 01 00 00 68 01 00 00 01 00 18 00 00 00 00 00 00 E9 07 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `518 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`480`, `360`)
  * `.rcTarget`: (`0`, `0`) - (`480`, `360`)
  * `.dwBitRate`: `124416000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `480`
   * `.biHeight`: `360`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `518 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 E0 01 00 00 68 01 00 00 E0 01 00 00 68 01 00 00 E0 01 00 00 68 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 E0 01 00 00 68 01 00 00 E0 01 00 00 68 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 70 6A 07 00 70 6A 07`
  * `.VideoStandard`: `0`
  * `.InputSize`: `480` x `360`
  * `.MinCroppingSize`: `480` x `360`
  * `.MaxCroppingSize`: `480` x `360`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `480` x `360`
  * `.MaxOutputSize`: `480` x `360`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `124 416 000`
  * `.MaxBitsPerSecond`: `124 416 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 49 4A 30 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 A3 02 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 E0 01 00 00 68 01 00 00 00 00 00 00 00 00 00 00 E0 01 00 00 68 01 00 00 00 D0 78 02 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 E0 01 00 00 68 01 00 00 01 00 00 00 41 49 4A 30 00 A3 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC AIJ0`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `172 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`480`, `360`)
  * `.rcTarget`: (`0`, `0`) - (`480`, `360`)
  * `.dwBitRate`: `41472000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `480`
   * `.biHeight`: `360`
   * `.biPlanes`: `1`
   * `.biBitCount`: `0`
   * `.biCompression`: `810174785` `AIJ0`
   * `.biSizeImage`: `172 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 E0 01 00 00 68 01 00 00 E0 01 00 00 68 01 00 00 E0 01 00 00 68 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 E0 01 00 00 68 01 00 00 E0 01 00 00 68 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 D0 78 02 00 D0 78 02`
  * `.VideoStandard`: `0`
  * `.InputSize`: `480` x `360`
  * `.MinCroppingSize`: `480` x `360`
  * `.MaxCroppingSize`: `480` x `360`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `480` x `360`
  * `.MaxOutputSize`: `480` x `360`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `41 472 000`
  * `.MaxBitsPerSecond`: `41 472 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 46 05 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 E0 01 00 00 68 01 00 00 00 00 00 00 00 00 00 00 E0 01 00 00 68 01 00 00 00 A0 F1 04 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 E0 01 00 00 68 01 00 00 01 00 10 00 4D 4A 50 47 00 46 05 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `345 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`480`, `360`)
  * `.rcTarget`: (`0`, `0`) - (`480`, `360`)
  * `.dwBitRate`: `82944000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `480`
   * `.biHeight`: `360`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `345 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 E0 01 00 00 68 01 00 00 E0 01 00 00 68 01 00 00 E0 01 00 00 68 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 E0 01 00 00 68 01 00 00 E0 01 00 00 68 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 A0 F1 04 00 A0 F1 04`
  * `.VideoStandard`: `0`
  * `.InputSize`: `480` x `360`
  * `.MinCroppingSize`: `480` x `360`
  * `.MaxCroppingSize`: `480` x `360`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `480` x `360`
  * `.MaxOutputSize`: `480` x `360`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `82 944 000`
  * `.MaxBitsPerSecond`: `82 944 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 E9 07 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 E0 01 00 00 68 01 00 00 00 00 00 00 00 00 00 00 E0 01 00 00 68 01 00 00 00 70 6A 07 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 E0 01 00 00 68 01 00 00 01 00 18 00 00 00 00 00 00 E9 07 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `518 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`480`, `360`)
  * `.rcTarget`: (`0`, `0`) - (`480`, `360`)
  * `.dwBitRate`: `124416000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `480`
   * `.biHeight`: `360`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `518 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 E0 01 00 00 68 01 00 00 E0 01 00 00 68 01 00 00 E0 01 00 00 68 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 E0 01 00 00 68 01 00 00 E0 01 00 00 68 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 70 6A 07 00 70 6A 07`
  * `.VideoStandard`: `0`
  * `.InputSize`: `480` x `360`
  * `.MinCroppingSize`: `480` x `360`
  * `.MaxCroppingSize`: `480` x `360`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `480` x `360`
  * `.MaxOutputSize`: `480` x `360`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `124 416 000`
  * `.MaxBitsPerSecond`: `124 416 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 8C 0A 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 E0 01 00 00 68 01 00 00 00 00 00 00 00 00 00 00 E0 01 00 00 68 01 00 00 00 40 E3 09 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 E0 01 00 00 68 01 00 00 01 00 20 00 00 00 00 00 00 8C 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `691 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`480`, `360`)
  * `.rcTarget`: (`0`, `0`) - (`480`, `360`)
  * `.dwBitRate`: `165888000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `480`
   * `.biHeight`: `360`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `691 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 E0 01 00 00 68 01 00 00 E0 01 00 00 68 01 00 00 E0 01 00 00 68 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 E0 01 00 00 68 01 00 00 E0 01 00 00 68 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 40 E3 09 00 40 E3 09`
  * `.VideoStandard`: `0`
  * `.InputSize`: `480` x `360`
  * `.MinCroppingSize`: `480` x `360`
  * `.MaxCroppingSize`: `480` x `360`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `480` x `360`
  * `.MaxOutputSize`: `480` x `360`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `165 888 000`
  * `.MaxBitsPerSecond`: `165 888 000`

Interfaces:

  * `IKsPropertySet`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`

## Device: CZ cam

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}-033`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{A3DC0391-9A3E-43A0-88BB-BCC82A0AC5F2}` - Alax.Info JPEG Video Source General Property Page

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `5`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 49 4A 30 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 65 04 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 41 49 4A 30 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC AIJ0`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `73728000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `0`
   * `.biCompression`: `810174785` `AIJ0`
   * `.biSizeImage`: `307 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 65 04 00 00 65 04`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `73 728 000`
  * `.MaxBitsPerSecond`: `73 728 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 4D 4A 50 47 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `614 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 CA 08 00 00 CA 08`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `147 456 000`
  * `.MaxBitsPerSecond`: `147 456 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 94 11 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 228 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `294912000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 228 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 94 11 00 00 94 11`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `294 912 000`
  * `.MaxBitsPerSecond`: `294 912 000`

Interfaces:

  * `IKsPropertySet`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`

## Device: RU Resort

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}-034`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{A3DC0391-9A3E-43A0-88BB-BCC82A0AC5F2}` - Alax.Info JPEG Video Source General Property Page

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `5`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 49 4A 30 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 65 04 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 41 49 4A 30 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC AIJ0`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `73728000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `0`
   * `.biCompression`: `810174785` `AIJ0`
   * `.biSizeImage`: `307 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 65 04 00 00 65 04`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `73 728 000`
  * `.MaxBitsPerSecond`: `73 728 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 4D 4A 50 47 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `614 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 CA 08 00 00 CA 08`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `147 456 000`
  * `.MaxBitsPerSecond`: `147 456 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 94 11 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 228 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `294912000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 228 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 94 11 00 00 94 11`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `294 912 000`
  * `.MaxBitsPerSecond`: `294 912 000`

Interfaces:

  * `IKsPropertySet`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`

## Device: RU Stroyka

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}-035`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{A3DC0391-9A3E-43A0-88BB-BCC82A0AC5F2}` - Alax.Info JPEG Video Source General Property Page

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `5`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 90 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 C0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 C0 02 00 00 40 02 00 00 00 00 67 11 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 C0 02 00 00 40 02 00 00 01 00 18 00 00 00 00 00 00 90 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 216 512`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`704`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`704`, `576`)
  * `.dwBitRate`: `291962880`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `704`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 216 512`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 C0 02 00 00 40 02 00 00 C0 02 00 00 40 02 00 00 C0 02 00 00 40 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 C0 02 00 00 40 02 00 00 C0 02 00 00 40 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 67 11 00 00 67 11`
  * `.VideoStandard`: `0`
  * `.InputSize`: `704` x `576`
  * `.MinCroppingSize`: `704` x `576`
  * `.MaxCroppingSize`: `704` x `576`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `704` x `576`
  * `.MaxOutputSize`: `704` x `576`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `291 962 880`
  * `.MaxBitsPerSecond`: `291 962 880`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 49 4A 30 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 30 06 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 C0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 C0 02 00 00 40 02 00 00 00 00 CD 05 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 C0 02 00 00 40 02 00 00 01 00 00 00 41 49 4A 30 00 30 06 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC AIJ0`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `405 504`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`704`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`704`, `576`)
  * `.dwBitRate`: `97320960`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `704`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `0`
   * `.biCompression`: `810174785` `AIJ0`
   * `.biSizeImage`: `405 504`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 C0 02 00 00 40 02 00 00 C0 02 00 00 40 02 00 00 C0 02 00 00 40 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 C0 02 00 00 40 02 00 00 C0 02 00 00 40 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 CD 05 00 00 CD 05`
  * `.VideoStandard`: `0`
  * `.InputSize`: `704` x `576`
  * `.MinCroppingSize`: `704` x `576`
  * `.MaxCroppingSize`: `704` x `576`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `704` x `576`
  * `.MaxOutputSize`: `704` x `576`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `97 320 960`
  * `.MaxBitsPerSecond`: `97 320 960`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 0C 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 C0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 C0 02 00 00 40 02 00 00 00 00 9A 0B 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 C0 02 00 00 40 02 00 00 01 00 10 00 4D 4A 50 47 00 60 0C 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `811 008`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`704`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`704`, `576`)
  * `.dwBitRate`: `194641920`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `704`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `811 008`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 C0 02 00 00 40 02 00 00 C0 02 00 00 40 02 00 00 C0 02 00 00 40 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 C0 02 00 00 40 02 00 00 C0 02 00 00 40 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 9A 0B 00 00 9A 0B`
  * `.VideoStandard`: `0`
  * `.InputSize`: `704` x `576`
  * `.MinCroppingSize`: `704` x `576`
  * `.MaxCroppingSize`: `704` x `576`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `704` x `576`
  * `.MaxOutputSize`: `704` x `576`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `194 641 920`
  * `.MaxBitsPerSecond`: `194 641 920`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 90 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 C0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 C0 02 00 00 40 02 00 00 00 00 67 11 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 C0 02 00 00 40 02 00 00 01 00 18 00 00 00 00 00 00 90 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 216 512`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`704`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`704`, `576`)
  * `.dwBitRate`: `291962880`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `704`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 216 512`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 C0 02 00 00 40 02 00 00 C0 02 00 00 40 02 00 00 C0 02 00 00 40 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 C0 02 00 00 40 02 00 00 C0 02 00 00 40 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 67 11 00 00 67 11`
  * `.VideoStandard`: `0`
  * `.InputSize`: `704` x `576`
  * `.MinCroppingSize`: `704` x `576`
  * `.MaxCroppingSize`: `704` x `576`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `704` x `576`
  * `.MaxOutputSize`: `704` x `576`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `291 962 880`
  * `.MaxBitsPerSecond`: `291 962 880`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 18 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 C0 02 00 00 40 02 00 00 00 00 00 00 00 00 00 00 C0 02 00 00 40 02 00 00 00 00 34 17 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 C0 02 00 00 40 02 00 00 01 00 20 00 00 00 00 00 00 C0 18 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 622 016`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`704`, `576`)
  * `.rcTarget`: (`0`, `0`) - (`704`, `576`)
  * `.dwBitRate`: `389283840`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `704`
   * `.biHeight`: `576`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 622 016`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 C0 02 00 00 40 02 00 00 C0 02 00 00 40 02 00 00 C0 02 00 00 40 02 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 C0 02 00 00 40 02 00 00 C0 02 00 00 40 02 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 34 17 00 00 34 17`
  * `.VideoStandard`: `0`
  * `.InputSize`: `704` x `576`
  * `.MinCroppingSize`: `704` x `576`
  * `.MaxCroppingSize`: `704` x `576`
  * `.CropGranularityX`: `1`
  * `.CropAlignX`: `1`
  * `.CropAlignY`: `1`
  * `.MinOutputSize`: `704` x `576`
  * `.MaxOutputSize`: `704` x `576`
  * `.OutputGranularityX`: `1`
  * `.OutputGranularityY`: `1`
  * `.StretchTapsX`: `0`
  * `.StretchTapsY`: `0`
  * `.ShrinkTapsX`: `0`
  * `.ShrinkTapsY`: `0`
  * `.MinFrameInterval`: `33 3333`
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `389 283 840`
  * `.MaxBitsPerSecond`: `389 283 840`

Interfaces:

  * `IKsPropertySet`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`

## Device: IS

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}-039`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{A3DC0391-9A3E-43A0-88BB-BCC82A0AC5F2}` - Alax.Info JPEG Video Source General Property Page

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `5`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 49 4A 30 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 65 04 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 41 49 4A 30 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC AIJ0`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `73728000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `0`
   * `.biCompression`: `810174785` `AIJ0`
   * `.biSizeImage`: `307 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 65 04 00 00 65 04`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `73 728 000`
  * `.MaxBitsPerSecond`: `73 728 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 4D 4A 50 47 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `614 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 CA 08 00 00 CA 08`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `147 456 000`
  * `.MaxBitsPerSecond`: `147 456 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 94 11 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 228 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `294912000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 228 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 94 11 00 00 94 11`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `294 912 000`
  * `.MaxBitsPerSecond`: `294 912 000`

Interfaces:

  * `IKsPropertySet`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`

## Device: US in Drawing Room

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}-040`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{A3DC0391-9A3E-43A0-88BB-BCC82A0AC5F2}` - Alax.Info JPEG Video Source General Property Page

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `5`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 49 4A 30 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 65 04 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 41 49 4A 30 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC AIJ0`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `73728000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `0`
   * `.biCompression`: `810174785` `AIJ0`
   * `.biSizeImage`: `307 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 65 04 00 00 65 04`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `73 728 000`
  * `.MaxBitsPerSecond`: `73 728 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 4D 4A 50 47 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `614 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 CA 08 00 00 CA 08`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `147 456 000`
  * `.MaxBitsPerSecond`: `147 456 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 94 11 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 228 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `294912000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 228 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 94 11 00 00 94 11`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `294 912 000`
  * `.MaxBitsPerSecond`: `294 912 000`

Interfaces:

  * `IKsPropertySet`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`

## Device: DE Ehingen

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}-041`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{A3DC0391-9A3E-43A0-88BB-BCC82A0AC5F2}` - Alax.Info JPEG Video Source General Property Page

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `5`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 49 4A 30 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 65 04 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 41 49 4A 30 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC AIJ0`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `73728000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `0`
   * `.biCompression`: `810174785` `AIJ0`
   * `.biSizeImage`: `307 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 65 04 00 00 65 04`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `73 728 000`
  * `.MaxBitsPerSecond`: `73 728 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 4D 4A 50 47 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `614 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 CA 08 00 00 CA 08`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `147 456 000`
  * `.MaxBitsPerSecond`: `147 456 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 94 11 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 228 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `294912000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 228 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 94 11 00 00 94 11`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `294 912 000`
  * `.MaxBitsPerSecond`: `294 912 000`

Interfaces:

  * `IKsPropertySet`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`

## Device: DE Bamberg

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}-042`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{A3DC0391-9A3E-43A0-88BB-BCC82A0AC5F2}` - Alax.Info JPEG Video Source General Property Page

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `5`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 49 4A 30 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 65 04 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 41 49 4A 30 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC AIJ0`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `73728000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `0`
   * `.biCompression`: `810174785` `AIJ0`
   * `.biSizeImage`: `307 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 65 04 00 00 65 04`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `73 728 000`
  * `.MaxBitsPerSecond`: `73 728 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 4D 4A 50 47 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `614 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 CA 08 00 00 CA 08`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `147 456 000`
  * `.MaxBitsPerSecond`: `147 456 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 94 11 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 228 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `294912000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 228 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 94 11 00 00 94 11`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `294 912 000`
  * `.MaxBitsPerSecond`: `294 912 000`

Interfaces:

  * `IKsPropertySet`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`

## Device: IT Vine

 * Moniker Display Name: `@device:sw:{860BB310-5D01-11D0-BD3B-00A0C911CE86}\{A8DA2ECB-DEF6-414D-8CE2-E651640DBA4F}-043`

Interfaces:

  * `ISpecifyPropertyPages`
  * `IAMFilterMiscFlags`

Property Pages:

  * `{A3DC0391-9A3E-43A0-88BB-BCC82A0AC5F2}` - Alax.Info JPEG Video Source General Property Page

### Pin: Output

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `5`
  * Structure Size: `128` (expected `128`)

#### Capability: 0

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 1

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 49 4A 30 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 00 00 00 00 00 B0 04 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 65 04 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 41 49 4A 30 00 B0 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC AIJ0`
  * `.bFixedSizeSamples`: `0`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `307 200`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `73728000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `0`
   * `.biCompression`: `810174785` `AIJ0`
   * `.biSizeImage`: `307 200`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 65 04 00 00 65 04`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `73 728 000`
  * `.MaxBitsPerSecond`: `73 728 000`

#### Capability: 2

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 4D 4A 50 47 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 60 09 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 CA 08 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 10 00 4D 4A 50 47 00 60 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.subtype`: `FourCC MJPG`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `614 400`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `147456000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `16`
   * `.biCompression`: `1196444237` `MJPG`
   * `.biSizeImage`: `614 400`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 CA 08 00 00 CA 08`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `147 456 000`
  * `.MaxBitsPerSecond`: `147 456 000`

#### Capability: 3

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7D EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 10 0E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 2F 0D 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 18 00 00 00 00 00 00 10 0E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `921 600`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `221184000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `24`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `921 600`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 2F 0D 00 00 2F 0D`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `221 184 000`
  * `.MaxBitsPerSecond`: `221 184 000`

#### Capability: 4

 * `AM_MEDIA_TYPE`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 C0 12 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 D8 FF 5B 00`
  * Format Data: `00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 00 00 00 00 00 00 80 02 00 00 E0 01 00 00 00 00 94 11 00 00 00 00 15 16 05 00 00 00 00 00 28 00 00 00 80 02 00 00 E0 01 00 00 01 00 20 00 00 00 00 00 00 C0 12 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
  * `.bFixedSizeSamples`: `1`
  * `.bTemporalCompression`: `0`
  * `.lSampleSize`: `1 228 800`
  * `.cbFormat`: `88`
  * `VIDEOINFOHEADER`:
  * `.rcSource`: (`0`, `0`) - (`640`, `480`)
  * `.rcTarget`: (`0`, `0`) - (`640`, `480`)
  * `.dwBitRate`: `294912000`
  * `.dwBitErrorRate`: `0`
  * `.AvgTimePerFrame`: `33 3333`
  * `BITMAPINFOHEADER`:
   * `.biSize`: `40`
   * `.biWidth`: `640`
   * `.biHeight`: `480`
   * `.biPlanes`: `1`
   * `.biBitCount`: `32`
   * `.biCompression`: `0` `0x00000000`
   * `.biSizeImage`: `1 228 800`
 * `VIDEO_STREAM_CONFIG_CAPS`:
  * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 01 00 00 00 01 00 00 00 80 02 00 00 E0 01 00 00 80 02 00 00 E0 01 00 00 01 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 15 16 05 00 00 00 00 00 15 16 05 00 00 00 00 00 00 00 94 11 00 00 94 11`
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
  * `.MaxFrameInterval`: `33 3333`
  * `.MinBitsPerSecond`: `294 912 000`
  * `.MaxBitsPerSecond`: `294 912 000`

Interfaces:

  * `IKsPropertySet`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`

# Audio

## Device: Лин. вход (SoundMAX Integrated 

 * Moniker Display Name: `@device:cm:{33D9A762-90C8-11D0-BD43-00A0C911CE86}\Лин. вход (SoundMAX Integrated `

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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 D8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 B8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 D8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 B8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 D8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 B8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 D8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 B8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 D8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 B8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 D8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 B8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 D8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 B8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 D8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 B8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 D8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 B8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 D8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 B8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 D8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 B8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 D8 C4 5B 00`
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

### Pin: Общая громкость

 * Direction: `PINDIR_INPUT`
Interfaces:

  * `IQualityControl`

## Device: VisioForge Network Streamer Audio Source

 * Moniker Display Name: `@device:sw:{33D9A762-90C8-11D0-BD43-00A0C911CE86}\VisioForge Network Streamer Audio Source`

Interfaces:

  * `IAMFilterMiscFlags`

### Pin: Capture

 * `AMPROPSETID_Pin`, `AMPROPERTY_PIN_CATEGORY`: `{FB6C4281-0353-11D1-905F-0000C0CC16BA} PIN_CATEGORY_CAPTURE`
 * Capabilities:
  * Count: `0`
  * Structure Size: `52` (expected `52`)

Interfaces:

  * `IKsPropertySet`
  * `IQualityControl`
  * `IAMBufferNegotiation`
  * `IAMStreamConfig`
  * `IAMStreamControl`

## Device: Микрофон (Logitech Mic (QuickCa

 * Moniker Display Name: `@device:cm:{33D9A762-90C8-11D0-BD43-00A0C911CE86}\Микрофон (Logitech Mic (QuickCa`

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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 18 C5 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 F8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 18 C5 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 F8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 18 C5 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 F8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 18 C5 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 F8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 18 C5 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 F8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 18 C5 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 F8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 18 C5 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 F8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 18 C5 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 F8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 18 C5 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 F8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 18 C5 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 F8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 18 C5 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 04 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 F8 C4 5B 00`
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
  * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 02 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 12 00 00 00 18 C5 5B 00`
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

### Pin: Общая громкость

 * Direction: `PINDIR_INPUT`
Interfaces:

  * `IQualityControl`

