# Filter Graph

* Process: `9,040` (`0x2350`) `RenderWmvVideo.exe`
* State: `Stopped`
* Duration: `20.778` (`20.778` seconds)
* Position: `00.000` (`0.000` seconds)
* Display Name: `!FilterGraph 008c3fb8 pid 00002350; process: RenderWmvVideo.exe, time: 16-57-02`
* Process Directory: `D:\Projects\Alax.Info\Repository-Public\Utilities\Miscellaneous\RenderWmvVideo\Debug`

## Filters

1. Video Renderer
 * Class: `{B87BEB7B-8D29-423F-AE4D-6582C10175AC}` 
 * Input Pins: `VMR Input0` (`Color Space Converter.XForm Out`)
2. Color Space Converter
 * Class: `{1643E180-90F5-11CE-97D5-00AA0055595A}` 
 * Input Pins: `Input` (`Sample Grabber.Output`)
 * Output Pins: `XForm Out` (`Video Renderer.VMR Input0`)
3. Sample Grabber
 * Class: `{C1F400A0-3F08-11D3-9F0B-006008039E37}` 
 * Input Pins: `Input` (`WMVideo Decoder DMO.out0`)
 * Output Pins: `Output` (`Color Space Converter.Input`)
4. WMVideo Decoder DMO
 * Class: `{94297043-BD82-4DFD-B0DE-8177739C6D20}` 
 * Input Pins: `in0` (`0001.Raw Video 1`)
 * Output Pins: `out0` (`Sample Grabber.Input`)
5. 0001
 * Class: `{187463A0-5BB7-11D3-ACBE-0080C75E246E}` 
 * Output Pins: `Raw Audio 0`, `Raw Video 1` (`WMVideo Decoder DMO.in0`)
 * File Source: `E:\Media\Robotica_1080.wmv`

## Connections

1. `Color Space Converter.XForm Out` - `Video Renderer.VMR Input0` (`MEDIATYPE_Video`, `MEDIASUBTYPE_RGB32`, `1,440` x `1,080`)
2. `Sample Grabber.Output` - `Color Space Converter.Input` (`MEDIATYPE_Video`, `MEDIASUBTYPE_RGB32`, `1,440` x `1,080`)
3. `WMVideo Decoder DMO.out0` - `Sample Grabber.Input` (`MEDIATYPE_Video`, `MEDIASUBTYPE_RGB32`, `1,440` x `1,080`)
4. `0001.Raw Video 1` - `WMVideo Decoder DMO.in0` (`MEDIATYPE_Video`, `FourCC WMV3`, `1,440` x `1,080`)

## Media Types

1. `Video Renderer.VMR Input0`, `Color Space Converter.XForm Out`
 * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 EC 5E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 A0 51 6B 00`
 * `majortype`: `MEDIATYPE_Video`
 * `subtype`: `MEDIASUBTYPE_RGB32`
 * `bFixedSizeSamples`: `1`
 * `bTemporalCompression`: `0`
 * `lSampleSize`: `6,220,800`
 * `formattype`: `FORMAT_VideoInfo`
 * `cbFormat`: `88`
 * Format Data, `pbFormat`: `00 00 00 00 00 00 00 00 A0 05 00 00 38 04 00 00 00 00 00 00 00 00 00 00 A0 05 00 00 38 04 00 00 00 00 00 00 00 00 00 00 3B 5D 06 00 00 00 00 00 28 00 00 00 A0 05 00 00 38 04 00 00 01 00 20 00 00 00 00 00 00 EC 5E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
 * As `VIDEOINFOHEADER`:
  * `rcSource`: (`0`, `0`) - (`1,440`, `1,080`)
  * `rcTarget`: (`0`, `0`) - (`1,440`, `1,080`)
  * `dwBitRate`: `0`
  * `dwBitErrorRate`: `0`
  * `AvgTimePerFrame`: `41 7083` units
  * `bmiHeader.biSize`: `40`
  * `bmiHeader.biWidth`: `1,440`
  * `bmiHeader.biHeight`: `1,080`
  * `bmiHeader.biPlanes`: `1`
  * `bmiHeader.biBitCount`: `32`
  * `bmiHeader.biCompression`: `0x00000000`
  * `bmiHeader.biSizeImage`: `6,220,800`
  * `bmiHeader.biXPelsPerMeter`: `0`
  * `bmiHeader.biYPelsPerMeter`: `0`
  * `bmiHeader.biClrUsed`: `0`
  * `bmiHeader.biClrImportant`: `0`
2. `Color Space Converter.Input`, `Sample Grabber.Output`
 * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 EC 5E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 20 53 6B 00`
 * `majortype`: `MEDIATYPE_Video`
 * `subtype`: `MEDIASUBTYPE_RGB32`
 * `bFixedSizeSamples`: `1`
 * `bTemporalCompression`: `0`
 * `lSampleSize`: `6,220,800`
 * `formattype`: `FORMAT_VideoInfo`
 * `cbFormat`: `88`
 * Format Data, `pbFormat`: `00 00 00 00 00 00 00 00 A0 05 00 00 38 04 00 00 00 00 00 00 00 00 00 00 A0 05 00 00 38 04 00 00 00 00 00 00 00 00 00 00 3B 5D 06 00 00 00 00 00 28 00 00 00 A0 05 00 00 38 04 00 00 01 00 20 00 00 00 00 00 00 EC 5E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
 * As `VIDEOINFOHEADER`:
  * `rcSource`: (`0`, `0`) - (`1,440`, `1,080`)
  * `rcTarget`: (`0`, `0`) - (`1,440`, `1,080`)
  * `dwBitRate`: `0`
  * `dwBitErrorRate`: `0`
  * `AvgTimePerFrame`: `41 7083` units
  * `bmiHeader.biSize`: `40`
  * `bmiHeader.biWidth`: `1,440`
  * `bmiHeader.biHeight`: `1,080`
  * `bmiHeader.biPlanes`: `1`
  * `bmiHeader.biBitCount`: `32`
  * `bmiHeader.biCompression`: `0x00000000`
  * `bmiHeader.biSizeImage`: `6,220,800`
  * `bmiHeader.biXPelsPerMeter`: `0`
  * `bmiHeader.biYPelsPerMeter`: `0`
  * `bmiHeader.biClrUsed`: `0`
  * `bmiHeader.biClrImportant`: `0`
3. `Sample Grabber.Input`, `WMVideo Decoder DMO.out0`
 * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 7E EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 01 00 00 00 00 00 00 00 00 EC 5E 00 80 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 58 00 00 00 E0 53 6B 00`
 * `majortype`: `MEDIATYPE_Video`
 * `subtype`: `MEDIASUBTYPE_RGB32`
 * `bFixedSizeSamples`: `1`
 * `bTemporalCompression`: `0`
 * `lSampleSize`: `6,220,800`
 * `formattype`: `FORMAT_VideoInfo`
 * `cbFormat`: `88`
 * Format Data, `pbFormat`: `00 00 00 00 00 00 00 00 A0 05 00 00 38 04 00 00 00 00 00 00 00 00 00 00 A0 05 00 00 38 04 00 00 00 00 00 00 00 00 00 00 3B 5D 06 00 00 00 00 00 28 00 00 00 A0 05 00 00 38 04 00 00 01 00 20 00 00 00 00 00 00 EC 5E 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
 * As `VIDEOINFOHEADER`:
  * `rcSource`: (`0`, `0`) - (`1,440`, `1,080`)
  * `rcTarget`: (`0`, `0`) - (`1,440`, `1,080`)
  * `dwBitRate`: `0`
  * `dwBitErrorRate`: `0`
  * `AvgTimePerFrame`: `41 7083` units
  * `bmiHeader.biSize`: `40`
  * `bmiHeader.biWidth`: `1,440`
  * `bmiHeader.biHeight`: `1,080`
  * `bmiHeader.biPlanes`: `1`
  * `bmiHeader.biBitCount`: `32`
  * `bmiHeader.biCompression`: `0x00000000`
  * `bmiHeader.biSizeImage`: `6,220,800`
  * `bmiHeader.biXPelsPerMeter`: `0`
  * `bmiHeader.biYPelsPerMeter`: `0`
  * `bmiHeader.biClrUsed`: `0`
  * `bmiHeader.biClrImportant`: `0`
4. `WMVideo Decoder DMO.in0`, `0001.Raw Video 1`
 * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 57 4D 56 33 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 01 00 00 00 00 00 00 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 74 00 00 00 10 D6 68 00`
 * `majortype`: `MEDIATYPE_Video`
 * `subtype`: `FourCC WMV3`
 * `bFixedSizeSamples`: `0`
 * `bTemporalCompression`: `1`
 * `lSampleSize`: `0`
 * `formattype`: `FORMAT_VideoInfo2`
 * `cbFormat`: `116`
 * Format Data, `pbFormat`: `00 00 00 00 00 00 00 00 A0 05 00 00 38 04 00 00 00 00 00 00 00 00 00 00 A0 05 00 00 38 04 00 00 00 12 7A 00 00 00 00 00 3B 5D 06 00 00 00 00 00 00 00 00 00 00 00 00 00 A0 05 00 00 38 04 00 00 00 00 00 00 00 00 00 00 2C 00 00 00 A0 05 00 00 38 04 00 00 01 00 18 00 57 4D 56 33 82 A1 02 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 4B F1 0A 01`
 * As `VIDEOINFOHEADER2`:
  * rcSource: (`0`, `0`) - (`1,440`, `1,080`)
  * rcTarget: (`0`, `0`) - (`1,440`, `1,080`)
  * `dwBitRate`: `8,000,000`
  * `dwBitErrorRate`: `0`
  * `AvgTimePerFrame`: `41 7083` units
  * `dwInterlaceFlags`: `0x0`
  * `dwCopyProtectFlags`: `0x0`
  * `dwPictAspectRatioX`: `1,440`
  * `dwPictAspectRatioY`: `1,080`
  * `dwControlFlags`: `0x0`
  * `bmiHeader.biSize`: `44`
  * `bmiHeader.biWidth`: `1,440`
  * `bmiHeader.biHeight`: `1,080`
  * `bmiHeader.biPlanes`: `1`
  * `bmiHeader.biBitCount`: `24`
  * `bmiHeader.biCompression`: `WMV3`
  * `bmiHeader.biSizeImage`: `172,418`
  * `bmiHeader.biXPelsPerMeter`: `0`
  * `bmiHeader.biYPelsPerMeter`: `0`
  * `bmiHeader.biClrUsed`: `0`
  * `bmiHeader.biClrImportant`: `0`
  * Extra Data: (4 bytes)
5. `0001.Raw Audio 0`
 * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 62 01 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 20 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 24 00 00 00 18 55 6A 00`
 * `majortype`: `MEDIATYPE_Audio`
 * `subtype`: `FourCC WAVE_FORMAT_WMAUDIO3`
 * `bFixedSizeSamples`: `1`
 * `bTemporalCompression`: `0`
 * `lSampleSize`: `8,192`
 * `formattype`: `FORMAT_WaveFormatEx`
 * `cbFormat`: `36`
 * Format Data, `pbFormat`: `62 01 06 00 80 BB 00 00 80 BB 00 00 00 20 18 00 12 00 18 00 3F 00 00 00 00 00 00 00 00 00 00 00 E0 00 00 00`
  * `wFormatTag`: `0x162`
  * `nChannels`: `6`
  * `nSamplesPerSec`: `48,000`
  * `nAvgBytesPerSec`: `48,000`
  * `nBlockAlign`: `8,192`
  * `wBitsPerSample`: `24`
  * `cbSize`: `18`
  * Extra Data: `18 00 3F 00 00 00 00 00 00 00 00 00 00 00 E0 00 00 00`

