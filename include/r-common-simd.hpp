#ifndef R_COMMON_SIMD_HPP
#define R_COMMON_SIMD_HPP

#if _MSC_VER
    #if !defined(__clang__)
        #define INSTRUCTION_REORDER_BARRIER _ReadWriteBarrier()
    #else
    #endif //!defined(__clang__)
    #include <intrin.h>
#else //_MSC_VER
    #include <x86intrin.h>
#endif //_MSC_VER

//integers u32[4]
typedef __m128i r_simd_4_u32;
#define r_simd_4_u32_load_aligned(u32_4_ptr)    _mm_load_si128((__m128i*)u32_4_ptr)
#define r_simd_4_u32_load_unaligned(u32_4_ptr)  _mm_loadu_si128((__m128i*)u32_4_ptr)
#define r_simd_4_u32_add(f32_4_a, f32_4_b)      _mm_add_epi32(f32_4_a, f32_4_b)
#define r_simd_4_u32_subtract(f32_4_a, f32_4_b) _mm_sub_epi_mm_add_epi32(f32_4_a, f32_4_b)
#define r_simd_4_u32_multiply(f32_4_a, f32_4_b) _mm_mul_epi_mm_add_epi32(f32_4_a, f32_4_b)
#define r_simd_4_u32_divide(f32_4_a, f32_4_b)   _mm_div_epi_mm_add_epi32(f32_4_a, f32_4_b)

//integers u32[8]
typedef __m256i r_simd_8_u32;
#define r_simd_8_u32_load_aligned(u32_8_ptr)    _mm256_load_si256((__m256i*)u32_8_ptr)
#define r_simd_8_u32_load_unaligned(u32_8_ptr)  _mm256_loadu_si256((__m256i*)u32_8_ptr)
#define r_simd_8_u32_add(f32_4_a, f32_4_b)      _mm256_add_epi32(f32_4_a, f32_4_b)
#define r_simd_8_u32_subtract(f32_4_a, f32_4_b) _mm256_sub_epi_mm_add_epi32(f32_4_a, f32_4_b)
#define r_simd_8_u32_multiply(f32_4_a, f32_4_b) _mm256_mul_epi_mm_add_epi32(f32_4_a, f32_4_b)
#define r_simd_8_u32_divide(f32_4_a, f32_4_b)   _mm256_div_epi_mm_add_epi32(f32_4_a, f32_4_b)

//floats f32[4]
typedef __m128  r_simd_4_f32;
#define r_simd_4_f32_load_aligned(f32_4_ptr)    _mm_load_ps(f32_4_ptr)
#define r_simd_4_f32_load_unaligned(f32_4_ptr)  _mm_loadu_ps(f32_4_ptr)
#define r_simd_4_f32_add(f32_4_a, f32_4_b)      _mm_add_ps(f32_4_a, f32_4_b)
#define r_simd_4_f32_subtract(f32_4_a, f32_4_b) _mm_sub_ps(f32_4_a, f32_4_b)
#define r_simd_4_f32_multiply(f32_4_a, f32_4_b) _mm_mul_ps(f32_4_a, f32_4_b)
#define r_simd_4_f32_divide(f32_4_a, f32_4_b)   _mm_div_ps(f32_4_a, f32_4_b)

//floats f32[8]
typedef __m256  r_simd_8_f32;
#define r_simd_8_f32_load_aligned(f32_8_ptr)    _mm256_load_ps(f32_8_ptr)
#define r_simd_8_f32_load_unaligned(f32_8_ptr)  _mm256_loadu_ps(f32_8_ptr)
#define r_simd_8_f32_add(f32_4_a, f32_4_b)      _mm256_add_ps(f32_4_a, f32_4_b)
#define r_simd_8_f32_subtract(f32_4_a, f32_4_b) _mm256_sub_ps(f32_4_a, f32_4_b)
#define r_simd_8_f32_multiply(f32_4_a, f32_4_b) _mm256_mul_ps(f32_4_a, f32_4_b)
#define r_simd_8_f32_divide(f32_4_a, f32_4_b)   _mm256_div_ps(f32_4_a, f32_4_b)


#endif //R_COMMON_SIMD_HPP