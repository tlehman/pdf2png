/* $Header: /cvsroot/osrs/libtiff/libtiff/tiffconf.h,v 1.3 2001/05/12 03:59:50 warmerda Exp $ */
/*
 * Copyright (c) 1988-1997 Sam Leffler
 * Copyright (c) 1991-1997 Silicon Graphics, Inc.
 *
 * Permission to use, copy, modify, distribute, and sell this software and 
 * its documentation for any purpose is hereby granted without fee, provided
 * that (i) the above copyright notices and this permission notice appear in
 * all copies of the software and related documentation, and (ii) the names of
 * Sam Leffler and Silicon Graphics may not be used in any advertising or
 * publicity relating to the software without the specific, prior written
 * permission of Sam Leffler and Silicon Graphics.
 * 
 * THE SOFTWARE IS PROVIDED "AS-IS" AND WITHOUT WARRANTY OF ANY KIND, 
 * EXPRESS, IMPLIED OR OTHERWISE, INCLUDING WITHOUT LIMITATION, ANY 
 * WARRANTY OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE.  
 * 
 * IN NO EVENT SHALL SAM LEFFLER OR SILICON GRAPHICS BE LIABLE FOR
 * ANY SPECIAL, INCIDENTAL, INDIRECT OR CONSEQUENTIAL DAMAGES OF ANY KIND,
 * OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,
 * WHETHER OR NOT ADVISED OF THE POSSIBILITY OF DAMAGE, AND ON ANY THEORY OF 
 * LIABILITY, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE 
 * OF THIS SOFTWARE.
 */

#ifndef _TIFFCONF_
#define _TIFFCONF_
/*
 * Library Configuration Definitions.
 *
 * This file defines the default configuration for the library.
 * If the target system does not have make or a way to specify
 * #defines on the command line, this file can be edited to
 * configure the library.  Otherwise, one can override portability
 * and configuration-related definitions from a Makefile or command
 * line by defining FEATURE_SUPPORT and COMPRESSION_SUPPORT (see below).
 */

/*
 * General portability-related defines:
 *
 * HAVE_IEEEFP      define as 0 or 1 according to the floating point
 *          format suported by the machine
 * BSDTYPES     define this if your system does NOT define the
 *          usual 4BSD typedefs u_int et. al.
 * HAVE_MMAP        enable support for memory mapping read-only files;
 *          this is typically deduced by the configure script
 * HOST_FILLORDER   native cpu bit order: one of FILLORDER_MSB2LSB
 *          or FILLODER_LSB2MSB; this is typically set by the
 *          configure script
 * HOST_BIGENDIAN   native cpu byte order: 1 if big-endian (Motorola)
 *          or 0 if little-endian (Intel); this may be used
 *          in codecs to optimize code
 * USE_64BIT_API    set to 1 if tif_unix.c should use lseek64(),
 *                      fstat64() and stat64 allowing 2-4GB files.
 */

#if 1

#define _TIFFDefaultStripSize           vspdft__TIFFDefaultStripSize
#define _TIFFDefaultTileSize            vspdft__TIFFDefaultTileSize
#define _TIFFFax3fillruns               vspdft__TIFFFax3fillruns
#define _TIFFFieldWithTag               vspdft__TIFFFieldWithTag
#define _TIFFFindFieldInfo              vspdft__TIFFFindFieldInfo
//#define _TIFFfree                       vspdft__TIFFfree
#define _TIFFgetMode                    vspdft__TIFFgetMode
//#define _TIFFmalloc                     vspdft__TIFFmalloc
#define _TIFFmemcmp                     vspdft__TIFFmemcmp
#define _TIFFmemcpy                     vspdft__TIFFmemcpy
#define _TIFFmemset                     vspdft__TIFFmemset
#define _TIFFMergeFieldInfo             vspdft__TIFFMergeFieldInfo
#define _TIFFNoPostDecode               vspdft__TIFFNoPostDecode
#define _TIFFNoPreCode                  vspdft__TIFFNoPreCode
#define _TIFFNoRowDecode                vspdft__TIFFNoRowDecode
#define _TIFFNoRowEncode                vspdft__TIFFNoRowEncode
#define _TIFFNoSeek                     vspdft__TIFFNoSeek
#define _TIFFNoStripDecode              vspdft__TIFFNoStripDecode
#define _TIFFNoStripEncode              vspdft__TIFFNoStripEncode
#define _TIFFNoTileDecode               vspdft__TIFFNoTileDecode
#define _TIFFNoTileEncode               vspdft__TIFFNoTileEncode
#define _TIFFprintAscii                 vspdft__TIFFprintAscii
#define _TIFFprintAsciiTag              vspdft__TIFFprintAsciiTag
#define _TIFFPrintFieldInfo             vspdft__TIFFPrintFieldInfo
//#define _TIFFrealloc                    vspdft__TIFFrealloc
#define _TIFFSampleToTagType            vspdft__TIFFSampleToTagType
#define _TIFFsetByteArray               vspdft__TIFFsetByteArray
#define _TIFFSetDefaultCompressionState vspdft__TIFFSetDefCompState
#define _TIFFsetDoubleArray             vspdft__TIFFsetDoubleArray
#define _TIFFsetFloatArray              vspdft__TIFFsetFloatArray
#define _TIFFsetLongArray               vspdft__TIFFsetLongArray
#define _TIFFsetShortArray              vspdft__TIFFsetShortArray
#define _TIFFsetString                  vspdft__TIFFsetString
#define _TIFFSetupFieldInfo             vspdft__TIFFSetupFieldInfo
#define _TIFFSwab16BitData              vspdft__TIFFSwab16BitData
#define _TIFFSwab32BitData              vspdft__TIFFSwab32BitData
#define _TIFFSwab64BitData              vspdft__TIFFSwab64BitData
#define CheckDirCount                   vspdft_CheckDirCount
#define ChopUpSingleUncompressedStrip   vspdft_ChopUpSingleUncompStrip
#define cl_hash                         vspdft_cl_hash
#define EstimateStripByteCounts         vspdft_EstimateStripByteCounts
#define find0span                       vspdft_find0span
#define find1span                       vspdft_find1span
#define gtStripContig                   vspdft_gtStripContig
#define gtStripSeparate                 vspdft_gtStripSeparate
#define gtTileContig                    vspdft_gtTileContig
#define gtTileSeparate                  vspdft_gtTileSeparate
#define horAcc16                        vspdft_horAcc16
#define horAcc8                         vspdft_horAcc8
#define horDiff16                       vspdft_horDiff16
#define horDiff8                        vspdft_horDiff8
#define JPEGDecode                      vspdft_JPEGDecode
#define JPEGDecodeRaw                   vspdft_JPEGDecodeRaw
#define JPEGEncode                      vspdft_JPEGEncode
#define JPEGEncodeRaw                   vspdft_JPEGEncodeRaw
#define LogL10fromY                     vspdft_LogL10fromY
#define LogL10toY                       vspdft_LogL10toY
#define LogL16fromY                     vspdft_LogL16fromY
#define LogL16toY                       vspdft_LogL16toY
#define LogLuv24fromXYZ                 vspdft_LogLuv24fromXYZ
#define LogLuv24toXYZ                   vspdft_LogLuv24toXYZ
#define LogLuv32fromXYZ                 vspdft_LogLuv32fromXYZ
#define LogLuv32toXYZ                   vspdft_LogLuv32toXYZ
#define LZWDecode                       vspdft_LZWDecode
#define LZWDecodeCompat                 vspdft_LZWDecodeCompat
#define MissingRequired                 vspdft_MissingRequired
#define NotConfigured                   vspdft_NotConfigured
#define pickTileContigCase              vspdft_pickTileContigCase
#define pickTileSeparateCase            vspdft_pickTileSeparateCase
#define PixarLogDecode                  vspdft_PixarLogDecode
#define PixarLogEncode                  vspdft_PixarLogEncode
#define PredictorDecodeRow              vspdft_PredictorDecodeRow
#define PredictorDecodeTile             vspdft_PredictorDecodeTile
#define PredictorEncodeRow              vspdft_PredictorEncodeRow
#define PredictorEncodeTile             vspdft_PredictorEncodeTile
#define swabHorAcc16                    vspdft_swabHorAcc16
#define TIFFAppendToStrip               vspdft_TIFFAppendToStrip
#define TIFFCheckRead                   vspdft_TIFFCheckRead
#define TIFFCheckTile                   vspdft_TIFFCheckTile
#define TIFFClientOpen                  vspdft_TIFFClientOpen
#define TIFFClose                       vspdft_TIFFClose
#define TIFFComputeStrip                vspdft_TIFFComputeStrip
#define TIFFComputeTile                 vspdft_TIFFComputeTile
#define TIFFCreateDirectory             vspdft_TIFFCreateDirectory
#define TIFFCurrentDirectory            vspdft_TIFFCurrentDirectory
#define TIFFCurrentDirOffset            vspdft_TIFFCurrentDirOffset
#define TIFFCurrentRow                  vspdft_TIFFCurrentRow
#define TIFFCurrentStrip                vspdft_TIFFCurrentStrip
#define TIFFCurrentTile                 vspdft_TIFFCurrentTile
#define TIFFDefaultDirectory            vspdft_TIFFDefaultDirectory
#define TIFFDefaultStripSize            vspdft_TIFFDefaultStripSize
#define TIFFDefaultTileSize             vspdft_TIFFDefaultTileSize
#define TIFFError                       vspdft_TIFFError
#define TIFFFdOpen                      vspdft_TIFFFdOpen
#define TIFFFetchAnyArray               vspdft_TIFFFetchAnyArray
#define TIFFFetchData                   vspdft_TIFFFetchData
#define TIFFFetchDoubleArray            vspdft_TIFFFetchDoubleArray
#define TIFFFetchExtraSamples           vspdft_TIFFFetchExtraSamples
#define TIFFFetchFloat                  vspdft_TIFFFetchFloat
#define TIFFFetchFloatArray             vspdft_TIFFFetchFloatArray
#define TIFFFetchNormalTag              vspdft_TIFFFetchNormalTag
#define TIFFFetchPerSampleAnys          vspdft_TIFFFetchPerSampleAnys
#define TIFFFetchPerSampleShorts        vspdft_TIFFFetchPerSamplShorts
#define TIFFFetchRational               vspdft_TIFFFetchRational
#define TIFFFetchRefBlackWhite          vspdft_TIFFFetchRefBlackWhite
#define TIFFFetchShortArray             vspdft_TIFFFetchShortArray
#define TIFFFetchShortPair              vspdft_TIFFFetchShortPair
#define TIFFFetchString                 vspdft_TIFFFetchString
#define TIFFFetchStripThing             vspdft_TIFFFetchStripThing
#define TIFFFileName                    vspdft_TIFFFileName
#define TIFFFileno                      vspdft_TIFFFileno
#define TIFFFillStrip                   vspdft_TIFFFillStrip
#define TIFFFillTile                    vspdft_TIFFFillTile
#define TIFFFindCODEC                   vspdft_TIFFFindCODEC
#define TIFFFlush                       vspdft_TIFFFlush
#define TIFFFlushData                   vspdft_TIFFFlushData
#define TIFFFlushData1                  vspdft_TIFFFlushData1
#define TIFFFreeDirectory               vspdft_TIFFFreeDirectory
#define TIFFGetBitRevTable              vspdft_TIFFGetBitRevTable
#define TIFFGetField                    vspdft_TIFFGetField
#define TIFFGetFieldDefaulted           vspdft_TIFFGetFieldDefaulted
#define TIFFGetMode                     vspdft_TIFFGetMode
#define TIFFGetVersion                  vspdft_TIFFGetVersion
#define TIFFGrowStrips                  vspdft_TIFFGrowStrips
#define TIFFInitDumpMode                vspdft_TIFFInitDumpMode
#define TIFFInitJPEG                    vspdft_TIFFInitJPEG
#define TIFFInitLZW                     vspdft_TIFFInitLZW
#define TIFFInitNeXT                    vspdft_TIFFInitNeXT
#define TIFFInitOJPEG                   vspdft_TIFFInitOJPEG
#define TIFFInitPackBits                vspdft_TIFFInitPackBits
#define TIFFInitSGILog                  vspdft_TIFFInitSGILog
#define TIFFInitThunderScan             vspdft_TIFFInitThunderScan
#define TIFFInitZIP                     vspdft_TIFFInitZIP
#define TIFFIsByteSwapped               vspdft_TIFFIsByteSwapped
#define TIFFIsMSB2LSB                   vspdft_TIFFIsMSB2LSB
#define TIFFIsTiled                     vspdft_TIFFIsTiled
#define TIFFIsUpSampled                 vspdft_TIFFIsUpSampled
#define TIFFLastDirectory               vspdft_TIFFLastDirectory
#define TIFFLinkDirectory               vspdft_TIFFLinkDirectory
#define TIFFNumberOfDirectories         vspdft_TIFFNumberOfDirectories
#define TIFFNumberOfStrips              vspdft_TIFFNumberOfStrips
#define TIFFNumberOfTiles               vspdft_TIFFNumberOfTiles
#define TIFFOpen                        vspdft_TIFFOpen
#define TIFFPredictorInit               vspdft_TIFFPredictorInit
#define TIFFPrintDirectory              vspdft_TIFFPrintDirectory
#define TIFFRasterScanlineSize          vspdft_TIFFRasterScanlineSize
#define TIFFReadBufferSetup             vspdft_TIFFReadBufferSetup
#define TIFFReadDirectory               vspdft_TIFFReadDirectory
#define TIFFReadEncodedStrip            vspdft_TIFFReadEncodedStrip
#define TIFFReadEncodedTile             vspdft_TIFFReadEncodedTile
#define TIFFReadRawStrip                vspdft_TIFFReadRawStrip
#define TIFFReadRawTile                 vspdft_TIFFReadRawTile
#define TIFFReadRGBAImage               vspdft_TIFFReadRGBAImage
#define TIFFReadRGBAStrip               vspdft_TIFFReadRGBAStrip
#define TIFFReadRGBATile                vspdft_TIFFReadRGBATile
#define TIFFReadScanline                vspdft_TIFFReadScanline
#define TIFFReadTile                    vspdft_TIFFReadTile
#define TIFFReassignTagToIgnore         vspdft_TIFFReassignTagToIgnore
#define TIFFRegisterCODEC               vspdft_TIFFRegisterCODEC
#define TIFFReverseBits                 vspdft_TIFFReverseBits
#define TIFFRewriteDirectory            vspdft_TIFFRewriteDirectory
#define TIFFRGBAImageBegin              vspdft_TIFFRGBAImageBegin
#define TIFFRGBAImageEnd                vspdft_TIFFRGBAImageEnd
#define TIFFRGBAImageGet                vspdft_TIFFRGBAImageGet
#define TIFFRGBAImageOK                 vspdft_TIFFRGBAImageOK
#define TIFFScanlineSize                vspdft_TIFFScanlineSize
#define TIFFSetCompressionScheme        vspdft_TIFFSetCompScheme
#define TIFFSetDefaultCompressionState  vspdft_TIFFSetDefaultCompState
#define TIFFSetDirectory                vspdft_TIFFSetDirectory
#define TIFFSetErrorHandler             vspdft_TIFFSetErrorHandler
#define TIFFSetField                    vspdft_TIFFSetField
#define TIFFSetSubDirectory             vspdft_TIFFSetSubDirectory
#define TIFFSetTagExtender              vspdft_TIFFSetTagExtender
#define TIFFSetupShortLong              vspdft_TIFFSetupShortLong
#define TIFFSetupShortPair              vspdft_TIFFSetupShortPair
#define TIFFSetupStrips                 vspdft_TIFFSetupStrips
#define TIFFSetWarningHandler           vspdft_TIFFSetWarningHandler
#define TIFFSetWriteOffset              vspdft_TIFFSetWriteOffset
#define TIFFStartStrip                  vspdft_TIFFStartStrip
#define TIFFStartTile                   vspdft_TIFFStartTile
#define TIFFStripSize                   vspdft_TIFFStripSize
#define TIFFSwabArrayOfLong             vspdft_TIFFSwabArrayOfLong           
#define TIFFSwabArrayOfShort            vspdft_TIFFSwabArrayOfShort
#define TIFFSwabDouble                  vspdft_TIFFSwabDouble
#define TIFFSwabLong                    vspdft_TIFFSwabLong
#define TIFFSwabShort                   vspdft_TIFFSwabShort
#define TIFFTileRowSize                 vspdft_TIFFTileRowSize
#define TIFFTileSize                    vspdft_TIFFTileSize
#define TIFFUnlinkDirectory             vspdft_TIFFUnlinkDirectory
#define TIFFUnRegisterCODEC             vspdft_TIFFUnRegisterCODEC
#define TIFFVGetField                   vspdft_TIFFVGetField
#define TIFFVGetFieldDefaulted          vspdft_TIFFVGetFieldDefaulted
#define TIFFVSetField                   vspdft_TIFFVSetField
#define TIFFVStripSize                  vspdft_TIFFVStripSize
#define TIFFVTileSize                   vspdft_TIFFVTileSize
#define TIFFWarning                     vspdft_TIFFWarning
#define TIFFWriteAnyArray               vspdft_TIFFWriteAnyArray
#define TIFFWriteBufferSetup            vspdft_TIFFWriteBufferSetup
#define TIFFWriteByteArray              vspdft_TIFFWriteByteArray
#define TIFFWriteCheck                  vspdft_TIFFWriteCheck
#define TIFFWriteData                   vspdft_TIFFWriteData
#define TIFFWriteDirectory              vspdft_TIFFWriteDirectory
#define TIFFWriteDoubleArray            vspdft_TIFFWriteDoubleArray
#define TIFFWriteEncodedStrip           vspdft_TIFFWriteEncodedStrip
#define TIFFWriteEncodedTile            vspdft_TIFFWriteEncodedTile
#define TIFFWriteFloatArray             vspdft_TIFFWriteFloatArray
#define TIFFWriteInkNames               vspdft_TIFFWriteInkNames
#define TIFFWriteLongArray              vspdft_TIFFWriteLongArray
#define TIFFWriteNormalTag              vspdft_TIFFWriteNormalTag
#define TIFFWritePerSampleAnys          vspdft_TIFFWritePerSampleAnys
#define TIFFWritePerSampleShorts        vspdft_TIFFWritePerSampShorts
#define TIFFWriteRationalArray          vspdft_TIFFWriteRationalArray
#define TIFFWriteRawStrip               vspdft_TIFFWriteRawStrip
#define TIFFWriteRawTile                vspdft_TIFFWriteRawTile
#define TIFFWriteScanline               vspdft_TIFFWriteScanline
#define TIFFWriteShortArray             vspdft_TIFFWriteShortArray
#define TIFFWriteShortTable             vspdft_TIFFWriteShortTable
#define TIFFWriteTile                   vspdft_TIFFWriteTile
#define TIFFWriteTransferFunction       vspdft_TIFFWriteTransferFunc
#define uv_decode                       vspdft_uv_decode
#define uv_encode                       vspdft_uv_encode
#define XYZtoRGB24                      vspdft_XYZtoRGB24
#define ZIPDecode                       vspdft_ZIPDecode
#define ZIPEncode                       vspdft_ZIPEn
#define TIFFFaxMainTable                vspdft_TIFFFaxMainTable
#define TIFFFaxWhiteTable               vspdft_TIFFFaxWhiteTable
#define TIFFFaxBlackTable               vspdft_TIFFFaxBlackTable
#define tiffDataWidth					vspdft_tiffDataWidth
#define _TIFFBuiltinCODECS				vspdft__TIFFBuiltinCODECS

#endif

#ifndef HAVE_IEEEFP
#define HAVE_IEEEFP 1
#endif
#ifndef HOST_FILLORDER
#define HOST_FILLORDER  FILLORDER_MSB2LSB
#endif
#ifndef HOST_BIGENDIAN
#define HOST_BIGENDIAN  1
#endif

#ifndef USE_64BIT_API
#  define USE_64BIT_API 0
#endif

#ifndef FEATURE_SUPPORT
/*
 * Feature support definitions:
 *
 *    COLORIMETRY_SUPPORT enable support for 6.0 colorimetry tags
 *    YCBCR_SUPPORT enable support for 6.0 YCbCr tags
 *    CMYK_SUPPORT  enable support for 6.0 CMYK tags
 *    ICC_SUPPORT   enable support for ICC profile tag
 *    PHOTOSHOP_SUPPORT enable support for PHOTOSHOP resource tag
 *    IPTC_SUPPORT  enable support for RichTIFF IPTC tag
 */
#define COLORIMETRY_SUPPORT
#define YCBCR_SUPPORT
#define CMYK_SUPPORT
#define ICC_SUPPORT
#define PHOTOSHOP_SUPPORT
#define IPTC_SUPPORT
#endif /* FEATURE_SUPPORT */

#ifndef COMPRESSION_SUPPORT
/*
 * Compression support defines:
 *
 *    CCITT_SUPPORT enable support for CCITT Group 3 & 4 algorithms
 *    PACKBITS_SUPPORT  enable support for Macintosh PackBits algorithm
 *    LZW_SUPPORT   enable support for LZW algorithm
 *    THUNDER_SUPPORT   enable support for ThunderScan 4-bit RLE algorithm
 *    NEXT_SUPPORT  enable support for NeXT 2-bit RLE algorithm
 *    OJPEG_SUPPORT enable support for 6.0-style JPEG DCT algorithms
 *          (requires IJG software)
 *    JPEG_SUPPORT  enable support for post-6.0-style JPEG DCT algorithms
 *          (requires freely available IJG software, see tif_jpeg.c)
 *    ZIP_SUPPORT   enable support for Deflate algorithm
 *          (requires freely available zlib software, see tif_zip.c)
 *    PIXARLOG_SUPPORT  enable support for Pixar log-format algorithm
 *    LOGLUV_SUPPORT    enable support for LogLuv high dynamic range encoding
 */
#define CCITT_SUPPORT
#define PACKBITS_SUPPORT
#define LZW_SUPPORT
#define THUNDER_SUPPORT
#define NEXT_SUPPORT
#define LOGLUV_SUPPORT
#define JPEG_SUPPORT
#define ZIP_SUPPORT
#define OJPEG_SUPPORT
#endif /* COMPRESSION_SUPPORT */

/*
 * If JPEG compression is enabled then we must also include
 * support for the colorimetry and YCbCr-related tags.
 */
#ifdef JPEG_SUPPORT
#ifndef YCBCR_SUPPORT
#define YCBCR_SUPPORT
#endif
#ifndef COLORIMETRY_SUPPORT
#define COLORIMETRY_SUPPORT
#endif
#endif /* JPEG_SUPPORT */

/*
 * ``Orthogonal Features''
 *
 * STRIPCHOP_DEFAULT    default handling of strip chopping support (whether
 *          or not to convert single-strip uncompressed images
 *          to mutiple strips of ~8Kb--to reduce memory use)
 * SUBIFD_SUPPORT   enable support for SubIFD tag (thumbnails and such)
 */
#ifndef STRIPCHOP_DEFAULT
#define STRIPCHOP_DEFAULT   TIFF_STRIPCHOP  /* default is to enable */
#endif
#ifndef SUBIFD_SUPPORT
#define SUBIFD_SUPPORT      1   /* enable SubIFD tag (330) support */
#endif

#if defined(_WIN32) || defined(WIN32)
#   define CDECL _cdecl
#endif


#ifndef CDECL
#   define CDECL 
#endif
#endif /* _TIFFCONF_ */
