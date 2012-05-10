/**
 * Represents some type of metadata about the result of the decoding that the decoder
 * wishes to communicate back to the caller.
 */

typedef enum {
  /**
   * Unspecified, application-specific metadata. Maps to an unspecified NSObject.
   */
  kResultMetadataTypeOther,
  
  /**
   * Denotes the likely approximate orientation of the barcode in the image. This value
   * is given as degrees rotated clockwise from the normal, upright orientation.
   * For example a 1D barcode which was found by reading top-to-bottom would be
   * said to have orientation "90". This key maps to an integer whose
   * value is in the range [0,360).
   */
  kResultMetadataTypeOrientation,

  /**
   * 2D barcode formats typically encode text, but allow for a sort of 'byte mode'
   * which is sometimes used to encode binary data. While {@link Result} makes available
   * the complete raw bytes in the barcode for these formats, it does not offer the bytes
   * from the byte segments alone.
   * 
   * This maps to an array of byte arrays corresponding to the
   * raw bytes in the byte segments in the barcode, in order.
   */
  kResultMetadataTypeByteSegments,

  /**
   * Error correction level used, if applicable. The value type depends on the
   * format, but is typically a String.
   */
  kResultMetadataTypeErrorCorrectionLevel,

  /**
   * For some periodicals, indicates the issue number as an integer.
   */
  kResultMetadataTypeIssueNumber,

  /**
   * For some products, indicates the suggested retail price in the barcode as a
   * formatted NSString.
   */
  kResultMetadataTypeSuggestedPrice,

  /**
   * For some products, the possible country of manufacture as NSString denoting the
   * ISO country code. Some map to multiple possible countries, like "US/CA".
   */
  kResultMetadataTypePossibleCountry
} ZXResultMetadataType;
