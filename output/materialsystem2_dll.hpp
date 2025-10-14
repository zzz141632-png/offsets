// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-14 22:51:59.345429500 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: materialsystem2.dll
        // Class count: 14
        // Enum count: 0
        namespace materialsystem2_dll {
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialParam_t {
                constexpr std::ptrdiff_t m_name = 0x0; // CUtlString
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialParamVector_t {
                constexpr std::ptrdiff_t m_value = 0x8; // Vector4D
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialParamString_t {
                constexpr std::ptrdiff_t m_value = 0x8; // CUtlString
            }
            // Parent: None
            // Field count: 13
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PostProcessingResource_t {
                constexpr std::ptrdiff_t m_bHasTonemapParams = 0x0; // bool
                constexpr std::ptrdiff_t m_toneMapParams = 0x4; // PostProcessingTonemapParameters_t
                constexpr std::ptrdiff_t m_bHasBloomParams = 0x40; // bool
                constexpr std::ptrdiff_t m_bloomParams = 0x44; // PostProcessingBloomParameters_t
                constexpr std::ptrdiff_t m_bHasVignetteParams = 0xCC; // bool
                constexpr std::ptrdiff_t m_vignetteParams = 0xD0; // PostProcessingVignetteParameters_t
                constexpr std::ptrdiff_t m_bHasLocalContrastParams = 0xF4; // bool
                constexpr std::ptrdiff_t m_localConstrastParams = 0xF8; // PostProcessingLocalContrastParameters_t
                constexpr std::ptrdiff_t m_nColorCorrectionVolumeDim = 0x10C; // int32
                constexpr std::ptrdiff_t m_colorCorrectionVolumeData = 0x110; // CUtlBinaryBlock
                constexpr std::ptrdiff_t m_bHasColorCorrection = 0x120; // bool
                constexpr std::ptrdiff_t m_bHasFogScatteringParams = 0x121; // bool
                constexpr std::ptrdiff_t m_fogScatteringParams = 0x124; // PostProcessingFogScatteringParameters_t
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialParamInt_t {
                constexpr std::ptrdiff_t m_nValue = 0x8; // int32
            }
            // Parent: None
            // Field count: 6
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PostProcessingVignetteParameters_t {
                constexpr std::ptrdiff_t m_flVignetteStrength = 0x0; // float32
                constexpr std::ptrdiff_t m_vCenter = 0x4; // Vector2D
                constexpr std::ptrdiff_t m_flRadius = 0xC; // float32
                constexpr std::ptrdiff_t m_flRoundness = 0x10; // float32
                constexpr std::ptrdiff_t m_flFeather = 0x14; // float32
                constexpr std::ptrdiff_t m_vColorTint = 0x18; // Vector
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PostProcessingLocalContrastParameters_t {
                constexpr std::ptrdiff_t m_flLocalContrastStrength = 0x0; // float32
                constexpr std::ptrdiff_t m_flLocalContrastEdgeStrength = 0x4; // float32
                constexpr std::ptrdiff_t m_flLocalContrastVignetteStart = 0x8; // float32
                constexpr std::ptrdiff_t m_flLocalContrastVignetteEnd = 0xC; // float32
                constexpr std::ptrdiff_t m_flLocalContrastVignetteBlur = 0x10; // float32
            }
            // Parent: None
            // Field count: 15
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PostProcessingTonemapParameters_t {
                constexpr std::ptrdiff_t m_flExposureBias = 0x0; // float32
                constexpr std::ptrdiff_t m_flShoulderStrength = 0x4; // float32
                constexpr std::ptrdiff_t m_flLinearStrength = 0x8; // float32
                constexpr std::ptrdiff_t m_flLinearAngle = 0xC; // float32
                constexpr std::ptrdiff_t m_flToeStrength = 0x10; // float32
                constexpr std::ptrdiff_t m_flToeNum = 0x14; // float32
                constexpr std::ptrdiff_t m_flToeDenom = 0x18; // float32
                constexpr std::ptrdiff_t m_flWhitePoint = 0x1C; // float32
                constexpr std::ptrdiff_t m_flLuminanceSource = 0x20; // float32
                constexpr std::ptrdiff_t m_flExposureBiasShadows = 0x24; // float32
                constexpr std::ptrdiff_t m_flExposureBiasHighlights = 0x28; // float32
                constexpr std::ptrdiff_t m_flMinShadowLum = 0x2C; // float32
                constexpr std::ptrdiff_t m_flMaxShadowLum = 0x30; // float32
                constexpr std::ptrdiff_t m_flMinHighlightLum = 0x34; // float32
                constexpr std::ptrdiff_t m_flMaxHighlightLum = 0x38; // float32
            }
            // Parent: None
            // Field count: 5
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PostProcessingFogScatteringParameters_t {
                constexpr std::ptrdiff_t m_fRadius = 0x0; // float32
                constexpr std::ptrdiff_t m_fScale = 0x4; // float32
                constexpr std::ptrdiff_t m_fCubemapScale = 0x8; // float32
                constexpr std::ptrdiff_t m_fVolumetricScale = 0xC; // float32
                constexpr std::ptrdiff_t m_fGradientScale = 0x10; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialParamBuffer_t {
                constexpr std::ptrdiff_t m_value = 0x8; // CUtlBinaryBlock
            }
            // Parent: None
            // Field count: 14
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialResourceData_t {
                constexpr std::ptrdiff_t m_materialName = 0x0; // CUtlString
                constexpr std::ptrdiff_t m_shaderName = 0x8; // CUtlString
                constexpr std::ptrdiff_t m_intParams = 0x10; // CUtlVector<MaterialParamInt_t>
                constexpr std::ptrdiff_t m_floatParams = 0x28; // CUtlVector<MaterialParamFloat_t>
                constexpr std::ptrdiff_t m_vectorParams = 0x40; // CUtlVector<MaterialParamVector_t>
                constexpr std::ptrdiff_t m_textureParams = 0x58; // CUtlVector<MaterialParamTexture_t>
                constexpr std::ptrdiff_t m_dynamicParams = 0x70; // CUtlVector<MaterialParamBuffer_t>
                constexpr std::ptrdiff_t m_dynamicTextureParams = 0x88; // CUtlVector<MaterialParamBuffer_t>
                constexpr std::ptrdiff_t m_intAttributes = 0xA0; // CUtlVector<MaterialParamInt_t>
                constexpr std::ptrdiff_t m_floatAttributes = 0xB8; // CUtlVector<MaterialParamFloat_t>
                constexpr std::ptrdiff_t m_vectorAttributes = 0xD0; // CUtlVector<MaterialParamVector_t>
                constexpr std::ptrdiff_t m_textureAttributes = 0xE8; // CUtlVector<MaterialParamTexture_t>
                constexpr std::ptrdiff_t m_stringAttributes = 0x100; // CUtlVector<MaterialParamString_t>
                constexpr std::ptrdiff_t m_renderAttributesUsed = 0x118; // CUtlVector<CUtlString>
            }
            // Parent: None
            // Field count: 16
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace PostProcessingBloomParameters_t {
                constexpr std::ptrdiff_t m_blendMode = 0x0; // BloomBlendMode_t
                constexpr std::ptrdiff_t m_flBloomStrength = 0x4; // float32
                constexpr std::ptrdiff_t m_flScreenBloomStrength = 0x8; // float32
                constexpr std::ptrdiff_t m_flBlurBloomStrength = 0xC; // float32
                constexpr std::ptrdiff_t m_flBloomThreshold = 0x10; // float32
                constexpr std::ptrdiff_t m_flBloomThresholdWidth = 0x14; // float32
                constexpr std::ptrdiff_t m_flSkyboxBloomStrength = 0x18; // float32
                constexpr std::ptrdiff_t m_flBloomStartValue = 0x1C; // float32
                constexpr std::ptrdiff_t m_flComputeBloomStrength = 0x20; // float32
                constexpr std::ptrdiff_t m_flComputeBloomThreshold = 0x24; // float32
                constexpr std::ptrdiff_t m_flComputeBloomRadius = 0x28; // float32
                constexpr std::ptrdiff_t m_flComputeBloomEffectsScale = 0x2C; // float32
                constexpr std::ptrdiff_t m_flComputeBloomLensDirtStrength = 0x30; // float32
                constexpr std::ptrdiff_t m_flComputeBloomLensDirtBlackLevel = 0x34; // float32
                constexpr std::ptrdiff_t m_flBlurWeight = 0x38; // float32[5]
                constexpr std::ptrdiff_t m_vBlurTint = 0x4C; // Vector[5]
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialParamFloat_t {
                constexpr std::ptrdiff_t m_flValue = 0x8; // float32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace MaterialParamTexture_t {
                constexpr std::ptrdiff_t m_pValue = 0x8; // CStrongHandle<InfoForResourceTypeCTextureBase>
            }
        }
    }
}
