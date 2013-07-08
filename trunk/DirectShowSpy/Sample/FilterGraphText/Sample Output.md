# Filter Graph

* State: `Stopped`
* Duration: `05:50.165` (`350.165` seconds)
* Position: `00.000` (`0.000` seconds)

## Filters

1. Default DirectSound Device
 * Class: `{79376820-07D0-11CF-A24D-0020AFD79767}` 
 * Input Pins: `Audio Input pin (rendered)` (`Microsoft DTV-DVD Audio Decoder.XFrom Out`)
2. Video Renderer
 * Class: `{B87BEB7B-8D29-423F-AE4D-6582C10175AC}` 
 * Input Pins: `VMR Input0` (`MainConcept AVC/H.264 Video Decoder.Video`)
3. Microsoft DTV-DVD Audio Decoder
 * Class: `{E1F1A0B8-BEEE-490D-BA7C-066C40B5E2B9}` 
 * Input Pins: `XForm In` (`MainConcept MP4 Demultiplexer.Audio Output 0`)
 * Output Pins: `XFrom Out` (`Default DirectSound Device.Audio Input pin (rendered)`)
4. MainConcept AVC/H.264 Video Decoder
 * Class: `{96B9D0ED-8D13-4171-A983-B84D88D627BE}` `MainConcept AVC/H.264 Video Decoder`
 * Input Pins: `AVC/H.264` (`MainConcept MP4 Demultiplexer.Video Output 0`)
 * Output Pins: `Video` (`Video Renderer.VMR Input0`), `~CC Out`
5. MainConcept MP4 Demultiplexer
 * Class: `{2A55FF12-1657-41D7-9D2D-A2CDC6978FF2}` `MainConcept MP4 Demultiplexer`
 * Input Pins: `Input` (`E:\Media\GoPro 2010 Highlights - You in HD - 1920x1080.mp4.Output`)
 * Output Pins: `Video Output 0` (`MainConcept AVC/H.264 Video Decoder.AVC/H.264`), `Audio Output 0` (`Microsoft DTV-DVD Audio Decoder.XForm In`)
6. E:\Media\GoPro 2010 Highlights - You in HD - 1920x1080.mp4
 * Class: `{E436EBB5-524F-11CE-9F53-0020AF0BA770}` 
 * Output Pins: `Output` (`MainConcept MP4 Demultiplexer.Input`)
 * File Source: `E:\Media\GoPro 2010 Highlights - You in HD - 1920x1080.mp4`

## Connections

1. `Microsoft DTV-DVD Audio Decoder.XFrom Out` - `Default DirectSound Device.Audio Input pin (rendered)` (`MEDIATYPE_Audio` `FourCC 0x00000003`)
2. `MainConcept AVC/H.264 Video Decoder.Video` - `Video Renderer.VMR Input0` (`MEDIATYPE_Video` `FourCC YV12`)
3. `MainConcept MP4 Demultiplexer.Video Output 0` - `MainConcept AVC/H.264 Video Decoder.AVC/H.264` (`MEDIATYPE_Video` `FourCC AVC1`)
4. `MainConcept MP4 Demultiplexer.Audio Output 0` - `Microsoft DTV-DVD Audio Decoder.XForm In` (`MEDIATYPE_Audio` `FourCC 0x000000ff`)
5. `E:\Media\GoPro 2010 Highlights - You in HD - 1920x1080.mp4.Output` - `MainConcept MP4 Demultiplexer.Input` (`MEDIATYPE_Stream` )

## Media Types

1. `Default DirectSound Device.Audio Input pin (rendered)`, `Microsoft DTV-DVD Audio Decoder.XFrom Out`
 * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 03 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 28 00 00 00 A8 EB 21 09`
 * `majortype`: `MEDIATYPE_Audio`
 * `subtype`: `FourCC 0x00000003`
 * `bFixedSizeSamples`: `1`
 * `bTemporalCompression`: `0`
 * `lSampleSize`: `1`
 * `formattype`: `FORMAT_WaveFormatEx`
 * `cbFormat`: `40`
 * Format Data, `pbFormat`: `FE FF 06 00 44 AC 00 00 60 26 10 00 18 00 20 00 16 00 20 00 3F 00 00 00 03 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71`
 * As `WAVEFORMATEXTENSIBLE`:
  * `Format.wFormatTag`: `0xFFFE`
  * `Format.nChannels`: `6`
  * `Format.nSamplesPerSec`: `44,100`
  * `Format.nAvgBytesPerSec`: `1,058,400`
  * `Format.nBlockAlign`: `24`
  * `Format.wBitsPerSample`: `32`
  * `Format.cbSize`: `22`
  * `Samples.wValidBitsPerSample`: `32`
  * `dwChannelMask`: `0x3F`
  * `SubFormat`: `{00000003-0000-0010-8000-00AA00389B71}`
2. `Video Renderer.VMR Input0`, `MainConcept AVC/H.264 Video Decoder.Video`
 * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 59 56 31 32 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 00 76 2F 00 A0 76 2A F7 0A EB D0 11 AC E4 00 00 C0 CC 16 BA 00 00 00 00 7C 00 00 00 B0 72 77 00`
 * `majortype`: `MEDIATYPE_Video`
 * `subtype`: `FourCC YV12`
 * `bFixedSizeSamples`: `1`
 * `bTemporalCompression`: `0`
 * `lSampleSize`: `3,110,400`
 * `formattype`: `FORMAT_VideoInfo2`
 * `cbFormat`: `124`
 * Format Data, `pbFormat`: `00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 65 1D 5F 2C 00 00 00 00 B2 19 05 00 00 00 00 00 00 00 00 00 01 00 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 28 00 00 00 80 07 00 00 38 04 00 00 01 00 0C 00 59 56 31 32 00 76 2F 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
 * As `VIDEOINFOHEADER2`:
  * rcSource: (`0`, `0`) - (`1,920`, `1,080`)
  * rcTarget: (`0`, `0`) - (`1,920`, `1,080`)
  * `dwBitRate`: `744,430,949`
  * `dwBitErrorRate`: `0`
  * `AvgTimePerFrame`: `33 4258` units
  * `dwInterlaceFlags`: `0x0`
  * `dwCopyProtectFlags`: `0x1`
  * `dwPictAspectRatioX`: `16`
  * `dwPictAspectRatioY`: `9`
  * `dwControlFlags`: `0x0`
  * `bmiHeader.biSize`: `40`
  * `bmiHeader.biWidth`: `1,920`
  * `bmiHeader.biHeight`: `1,080`
  * `bmiHeader.biPlanes`: `1`
  * `bmiHeader.biBitCount`: `12`
  * `bmiHeader.biCompression`: `YV12`
  * `bmiHeader.biSizeImage`: `3,110,400`
  * `bmiHeader.biXPelsPerMeter`: `0`
  * `bmiHeader.biYPelsPerMeter`: `0`
  * `bmiHeader.biClrUsed`: `0`
  * `bmiHeader.biClrImportant`: `0`
  * Extra Data: (12 bytes)
3. `Microsoft DTV-DVD Audio Decoder.XForm In`, `MainConcept MP4 Demultiplexer.Audio Output 0`
 * Data: `61 75 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 FF 00 00 00 00 00 10 00 80 00 00 AA 00 38 9B 71 01 00 00 00 00 00 00 00 01 00 00 00 81 9F 58 05 56 C3 CE 11 BF 01 00 AA 00 55 59 5A 00 00 00 00 14 00 00 00 08 73 7D 00`
 * `majortype`: `MEDIATYPE_Audio`
 * `subtype`: `FourCC 0x000000ff`
 * `bFixedSizeSamples`: `1`
 * `bTemporalCompression`: `0`
 * `lSampleSize`: `1`
 * `formattype`: `FORMAT_WaveFormatEx`
 * `cbFormat`: `20`
 * Format Data, `pbFormat`: `FF 00 02 00 44 AC 00 00 81 3E 00 00 01 00 10 00 02 00 12 10`
  * `wFormatTag`: `0xFF`
  * `nChannels`: `2`
  * `nSamplesPerSec`: `44,100`
  * `nAvgBytesPerSec`: `16,001`
  * `nBlockAlign`: `1`
  * `wBitsPerSample`: `16`
  * `cbSize`: `2`
  * Extra Data: `12 10`
4. `MainConcept AVC/H.264 Video Decoder.AVC/H.264`, `MainConcept MP4 Demultiplexer.Video Output 0`
 * Data: `76 69 64 73 00 00 10 00 80 00 00 AA 00 38 9B 71 41 56 43 31 00 00 10 00 80 00 00 AA 00 38 9B 71 00 00 00 00 01 00 00 00 00 00 00 00 E3 80 6D E0 46 DB CF 11 B4 D1 00 80 5F 6C BB EA 00 00 00 00 AA 00 00 00 D8 DA 7D 00`
 * `majortype`: `MEDIATYPE_Video`
 * `subtype`: `FourCC AVC1`
 * `bFixedSizeSamples`: `0`
 * `bTemporalCompression`: `1`
 * `lSampleSize`: `0`
 * `formattype`: `FORMAT_MPEG2Video`
 * `cbFormat`: `170`
 * Format Data, `pbFormat`: `00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 A2 47 59 00 00 00 00 00 71 17 05 00 00 00 00 00 00 00 00 00 00 00 00 00 10 00 00 00 09 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 80 07 00 00 38 04 00 00 01 00 18 00 61 76 63 31 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 22 00 00 00 64 00 00 00 28 00 00 00 04 00 00 00 00 19 67 64 00 28 AC 24 88 07 80 22 7E 5C 04 40 00 00 FA 00 00 3A 6E 83 C6 0C A8 00 05 68 EE 32 C8 B0 00 00 00 00`
 * As `MPEG2VIDEOINFO`:
  * `hdr.rcSource`: (`0`, `0`) - (`1,920`, `1,080`)
  * `hdr.rcTarget`: (`0`, `0`) - (`1,920`, `1,080`)
  * `hdr.dwBitRate`: `5,851,042`
  * `hdr.dwBitErrorRate`: `0`
  * `hdr.AvgTimePerFrame`: `33 3681`
  * `hdr.dwInterlaceFlags`: `0x0`
  * `hdr.dwCopyProtectFlags`: `0x0`
  * `hdr.dwPictAspectRatioX`: `16`
  * `hdr.dwPictAspectRatioY`: `9`
  * `hdr.dwControlFlags`: `0x0`
  * `hdr.bmiHeader.biSize`: `0`
  * `hdr.bmiHeader.biWidth`: `1,920`
  * `hdr.bmiHeader.biHeight`: `1,080`
  * `hdr.bmiHeader.biPlanes`: `1`
  * `hdr.bmiHeader.biBitCount`: `24`
  * `hdr.bmiHeader.biCompression`: `avc1`
  * `hdr.bmiHeader.biSizeImage`: `0`
  * `hdr.bmiHeader.biXPelsPerMeter`: `0`
  * `hdr.bmiHeader.biYPelsPerMeter`: `0`
  * `hdr.bmiHeader.biClrUsed`: `0`
  * `hdr.bmiHeader.biClrImportant`: `0`
  * `dwStartTimeCode`: `0x00000000`
  * `cbSequenceHeader`: `34`
  * `dwProfile`: `100`
  * `dwLevel`: `40`
  * `dwFlags`: `0x00000004`
  * Extra Data: `00 19 67 64 00 28 AC 24 88 07 80 22 7E 5C 04 40 00 00 FA 00 00 3A 6E 83 C6 0C A8 00 05 68 EE 32 C8 B0 00 00 00 00`
5. `MainConcept AVC/H.264 Video Decoder.~CC Out`
 * Data: `80 EA 0A 67 82 3A D0 11 B7 9B 00 AA 00 37 67 A7 22 4A 8D 6E 0C 31 D0 11 B7 9A 00 AA 00 37 67 A7 01 00 00 00 00 00 00 00 01 00 00 00 D6 17 64 0F 18 C3 D0 11 A4 3F 00 A0 C9 22 31 96 00 00 00 00 00 00 00 00 00 00 00 00`
 * `majortype`: `{670AEA80-3A82-11D0-B79B-00AA003767A7}`
 * `subtype`: `{6E8D4A22-310C-11D0-B79A-00AA003767A7}`
 * `bFixedSizeSamples`: `1`
 * `bTemporalCompression`: `0`
 * `lSampleSize`: `1`
 * `formattype`: `FORMAT_None`
6. `MainConcept MP4 Demultiplexer.Input`, `E:\Media\GoPro 2010 Highlights - You in HD - 1920x1080.mp4.Output`
 * Data: `83 EB 36 E4 4F 52 CE 11 9F 53 00 20 AF 0B A7 70 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 01 00 00 00 00 00 00 00 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00`
 * `majortype`: `MEDIATYPE_Stream`
 * `bFixedSizeSamples`: `1`
 * `bTemporalCompression`: `0`
 * `lSampleSize`: `1`


