// Generated using https://github.com/a2x/cs2-dumper
// 2025-10-14 23:07:52.782756500 UTC

#pragma once

#include <cstddef>

namespace cs2_dumper {
    namespace schemas {
        // Module: schemasystem.dll
        // Class count: 7
        // Enum count: 0
        namespace schemasystem_dll {
            // Parent: None
            // Field count: 0
            //
            // Metadata:
            // MResourceTypeForInfoType
            namespace InfoForResourceTypeCResourceManifestInternal {
            }
            // Parent: None
            // Field count: 23
            namespace CSchemaSystemInternalRegistration {
                constexpr std::ptrdiff_t m_Vector2D = 0x0; // Vector2D
                constexpr std::ptrdiff_t m_Vector = 0x8; // Vector
                constexpr std::ptrdiff_t m_VectorWS = 0x14; // VectorWS
                constexpr std::ptrdiff_t m_VectorAligned = 0x20; // VectorAligned
                constexpr std::ptrdiff_t m_Quaternion = 0x30; // Quaternion
                constexpr std::ptrdiff_t m_QAngle = 0x40; // QAngle
                constexpr std::ptrdiff_t m_RotationVector = 0x4C; // RotationVector
                constexpr std::ptrdiff_t m_RadianEuler = 0x58; // RadianEuler
                constexpr std::ptrdiff_t m_DegreeEuler = 0x64; // DegreeEuler
                constexpr std::ptrdiff_t m_QuaternionStorage = 0x70; // QuaternionStorage
                constexpr std::ptrdiff_t m_matrix3x4_t = 0x80; // matrix3x4_t
                constexpr std::ptrdiff_t m_matrix3x4a_t = 0xB0; // matrix3x4a_t
                constexpr std::ptrdiff_t m_Color = 0xE0; // Color
                constexpr std::ptrdiff_t m_Vector4D = 0xE4; // Vector4D
                constexpr std::ptrdiff_t m_CTransform = 0x100; // CTransform
                constexpr std::ptrdiff_t m_pKeyValues = 0x120; // KeyValues*
                constexpr std::ptrdiff_t m_CUtlBinaryBlock = 0x128; // CUtlBinaryBlock
                constexpr std::ptrdiff_t m_CUtlString = 0x138; // CUtlString
                constexpr std::ptrdiff_t m_CUtlSymbol = 0x140; // CUtlSymbol
                constexpr std::ptrdiff_t m_stringToken = 0x144; // CUtlStringToken
                constexpr std::ptrdiff_t m_stringTokenWithStorage = 0x148; // CUtlStringTokenWithStorage
                constexpr std::ptrdiff_t m_ResourceTypes = 0x160; // CResourceArray<CResourcePointer<CResourceString>>
                constexpr std::ptrdiff_t m_KV3 = 0x168; // KeyValues3
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CExampleSchemaVData_PolymorphicDerivedA {
                constexpr std::ptrdiff_t m_nDerivedA = 0x10; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CExampleSchemaVData_PolymorphicBase {
                constexpr std::ptrdiff_t m_nBase = 0x8; // int32
            }
            // Parent: None
            // Field count: 1
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CExampleSchemaVData_PolymorphicDerivedB {
                constexpr std::ptrdiff_t m_nDerivedB = 0x10; // int32
            }
            // Parent: None
            // Field count: 1
            namespace ResourceId_t {
                constexpr std::ptrdiff_t m_Value = 0x0; // uint64
            }
            // Parent: None
            // Field count: 2
            //
            // Metadata:
            // MGetKV3ClassDefaults
            namespace CExampleSchemaVData_Monomorphic {
                constexpr std::ptrdiff_t m_nExample1 = 0x0; // int32
                constexpr std::ptrdiff_t m_nExample2 = 0x4; // int32
            }
        }
    }
}
