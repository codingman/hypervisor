//
// Copyright (C) 2019 Assured Information Security, Inc.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef VCPU_STATE_INTEL_X64_H
#define VCPU_STATE_INTEL_X64_H

#include <cstdint>

/// @cond
#pragma pack(push, 1)

namespace bfvmm::intel_x64
{

struct vcpu_state_t {
    uint64_t rax;                   // 0x000
    uint64_t rbx;                   // 0x008
    uint64_t rcx;                   // 0x010
    uint64_t rdx;                   // 0x018
    uint64_t rbp;                   // 0x020
    uint64_t rsi;                   // 0x028
    uint64_t rdi;                   // 0x030
    uint64_t r08;                   // 0x038
    uint64_t r09;                   // 0x040
    uint64_t r10;                   // 0x048
    uint64_t r11;                   // 0x050
    uint64_t r12;                   // 0x058
    uint64_t r13;                   // 0x060
    uint64_t r14;                   // 0x068
    uint64_t r15;                   // 0x070
    uint64_t rip;                   // 0x078
    uint64_t rsp;                   // 0x080

    uint64_t pcpuid;                // 0x088
    uint64_t vcpuid;                // 0x090
    uint64_t vcpu_ptr;              // 0x098
    uint64_t exit_handler_ptr;      // 0x0A0

    uint64_t xcr0;                  // 0x0A8
    uint64_t xcr0_cpuid;            // 0x0B0
    uint64_t ia32_xss;              // 0x0B8
    uint64_t ia32_xss_cpuid;        // 0x0C0
    uint64_t guest_xsaves_area_ptr; // 0x0C8
    uint64_t host_xsaves_area_ptr;  // 0x0D0

    uint64_t cr2;                   // 0x0D8
    uint64_t cr8;                   // 0x0E0
    uint64_t dr0;                   // 0x0E8
    uint64_t dr1;                   // 0x0F0
    uint64_t dr2;                   // 0x0F8
    uint64_t dr3;                   // 0x100
    uint64_t dr6;                   // 0x108
};

}

#pragma pack(pop)
/// @endcond

#endif
