// SPDX-License-Identifier: GPL-3.0-or-later

// This test file is auto-generated. do not edit.
// This file is a derivative work from the test files found
// in this repo : https://github.com/mahkoh/repr-c
// and is under the same licence as the original work.

#pragma pack(1)
typedef struct {
#ifdef MSVC
    __declspec(align(2)) char a:1;
#else
    char a:1 __attribute__((aligned(2)));
#endif
} S2;
S2 var1;
#pragma pack()
struct S2_extra_alignment {
#ifdef MSVC
    char a[_Alignof(S2)];
    char b;
#else
    char a;
    S2 b;
#endif
};
struct S2_extra_alignment var2;
#pragma pack(1)
struct S2_extra_packed {
    S2 a;
};
#pragma pack()
struct S2_extra_required_alignment {
#ifdef MSVC
    char a[_Alignof(struct S2_extra_packed)];
    char b;
#else
    char a;
    struct S2_extra_packed b;
#endif
};
struct S2_extra_required_alignment var3;
struct S2_extra_size {
    char a[sizeof(S2)+1];
    char b;
};
struct S2_extra_size var4;

#pragma pack(1)
typedef struct {
#ifdef MSVC
    __declspec(align(4)) char a:1;
#else
    char a:1 __attribute__((aligned(4)));
#endif
} S4;
S4 var5;
#pragma pack()
struct S4_extra_alignment {
#ifdef MSVC
    char a[_Alignof(S4)];
    char b;
#else
    char a;
    S4 b;
#endif
};
struct S4_extra_alignment var6;
#pragma pack(1)
struct S4_extra_packed {
    S4 a;
};
#pragma pack()
struct S4_extra_required_alignment {
#ifdef MSVC
    char a[_Alignof(struct S4_extra_packed)];
    char b;
#else
    char a;
    struct S4_extra_packed b;
#endif
};
struct S4_extra_required_alignment var7;
struct S4_extra_size {
    char a[sizeof(S4)+1];
    char b;
};
struct S4_extra_size var8;

#pragma pack(1)
typedef struct {
#ifdef MSVC
    __declspec(align(8)) char a:1;
#else
    char a:1 __attribute__((aligned(8)));
#endif
} S8;
S8 var9;
#pragma pack()
struct S8_extra_alignment {
#ifdef MSVC
    char a[_Alignof(S8)];
    char b;
#else
    char a;
    S8 b;
#endif
};
struct S8_extra_alignment var10;
#pragma pack(1)
struct S8_extra_packed {
    S8 a;
};
#pragma pack()
struct S8_extra_required_alignment {
#ifdef MSVC
    char a[_Alignof(struct S8_extra_packed)];
    char b;
#else
    char a;
    struct S8_extra_packed b;
#endif
};
struct S8_extra_required_alignment var11;
struct S8_extra_size {
    char a[sizeof(S8)+1];
    char b;
};
struct S8_extra_size var12;

#pragma pack(1)
typedef struct {
#ifdef MSVC
    __declspec(align(16)) char a:1;
#else
    char a:1 __attribute__((aligned(16)));
#endif
} S16;
S16 var13;
#pragma pack()
struct S16_extra_alignment {
#ifdef MSVC
    char a[_Alignof(S16)];
    char b;
#else
    char a;
    S16 b;
#endif
};
struct S16_extra_alignment var14;
#pragma pack(1)
struct S16_extra_packed {
    S16 a;
};
#pragma pack()
struct S16_extra_required_alignment {
#ifdef MSVC
    char a[_Alignof(struct S16_extra_packed)];
    char b;
#else
    char a;
    struct S16_extra_packed b;
#endif
};
struct S16_extra_required_alignment var15;
struct S16_extra_size {
    char a[sizeof(S16)+1];
    char b;
};
struct S16_extra_size var16;

#pragma pack(1)
typedef struct {
#ifdef MSVC
    __declspec(align(32)) char a:1;
#else
    char a:1 __attribute__((aligned(32)));
#endif
} S32;
S32 var17;
#pragma pack()
struct S32_extra_alignment {
#ifdef MSVC
    char a[_Alignof(S32)];
    char b;
#else
    char a;
    S32 b;
#endif
};
struct S32_extra_alignment var18;
#pragma pack(1)
struct S32_extra_packed {
    S32 a;
};
#pragma pack()
struct S32_extra_required_alignment {
#ifdef MSVC
    char a[_Alignof(struct S32_extra_packed)];
    char b;
#else
    char a;
    struct S32_extra_packed b;
#endif
};
struct S32_extra_required_alignment var19;
struct S32_extra_size {
    char a[sizeof(S32)+1];
    char b;
};
struct S32_extra_size var20;

// MAPPING|ONE|aarch64-generic-macos-none:Clang|aarch64-generic-fuchsia-gnu:Clang|aarch64-generic-linux-android:Clang|aarch64-generic-freebsd-gnu:Clang|aarch64-generic-hermit-eabi:Clang|aarch64-generic-linux-gnu:Gcc|aarch64-generic-linux-musl:Gcc|aarch64-generic-netbsd-gnu:Clang|aarch64-generic-other-none:Clang|aarch64-generic-openbsd-gnu:Clang|aarch64-generic-ios-none:Clang|aarch64-generic-ios-macabi:Clang|aarch64-generic-tvos-none:Clang|arm-baseline-other-eabi:Clang|arm-baseline-other-eabihf:Clang|arm-baseline-linux-gnueabi:Gcc|arm-baseline-linux-gnueabihf:Gcc|arm-arm710t-linux-gnueabi:Gcc|arm-arm1020e-linux-gnueabi:Gcc|arm-arm1136j_s-freebsd-gnueabihf:Clang|arm-arm1136j_s-netbsd-eabihf:Clang|arm-baseline-other-eabi:Clang|arm-baseline-other-eabihf:Clang|arm-cortex_r4-ios-none:Clang|arm-cortex_r4-linux-android:Clang|arm-cortex_r4-other-eabi:Clang|arm-cortex_r4-other-eabihf:Clang|arm-baseline-ios-none:Clang|arm-cortex_r4-freebsd-gnueabihf:Clang|arm-cortex_r4-linux-gnueabi:Gcc|arm-cortex_r4-linux-gnueabihf:Gcc|arm-cortex_r4-netbsd-eabihf:Clang|avr-avr2-other-eabi:Gcc|hexagon-generic-linux-musl:Clang|x86-pentium4-ios-none:Clang|x86-i586-linux-gnu:Gcc|x86-i586-linux-musl:Gcc|x86-i686-macos-none:Clang|x86-i686-linux-android:Clang|x86-i686-windows-gnu:Gcc|x86-i686-freebsd-gnu:Clang|x86-i686-haiku-gnu:Clang|x86-i686-linux-gnu:Gcc|x86-i686-linux-musl:Gcc|x86-i686-netbsd-gnu:Clang|x86-i686-openbsd-gnu:Clang|mips64el-mips64-linux-gnuabi64:Gcc|mips64el-mips64-linux-musl:Gcc|mips64-mips64-linux-gnuabi64:Gcc|mips64-mips64-linux-musl:Gcc|mipsel-mips32-linux-gnu:Gcc|mipsel-mips32-linux-musl:Gcc|mipsel-mips32-other-none:Clang|mips-mips32-linux-gnu:Gcc|mips-mips32r6-linux-gnu:Gcc|mips-mips32-linux-gnuabi64:Gcc|mips-mips64r6-linux-gnuabi64:Gcc|mips-mips32-linux-gnu:Gcc|mips-mips32-linux-musl:Gcc|msp430-msp430-other-eabi:Clang|powerpc64le-ppc64le-linux-gnu:Gcc|powerpc64le-ppc64le-linux-musl:Gcc|powerpc64-ppc64-freebsd-gnu:Clang|powerpc64-ppc64-linux-gnu:Gcc|powerpc64-ppc64-linux-musl:Gcc|powerpc-ppc-linux-gnu:Gcc|powerpc-ppc-linux-musl:Gcc|powerpc-ppc-netbsd-gnu:Clang|riscv32-baseline_rv32-other-eabi:Clang|riscv32-baseline_rv32-linux-gnu:Gcc|riscv64-baseline_rv64-other-eabi:Clang|riscv64-baseline_rv64-linux-gnu:Gcc|s390x-generic-linux-gnu:Gcc|sparc64-v9-linux-gnu:Gcc|sparc64-v9-netbsd-gnu:Clang|sparc64-v9-openbsd-gnu:Clang|sparc-v8-linux-gnu:Gcc|sparc-v9-solaris-eabi:Clang|thumb-arm710t-other-eabi:Clang|thumb-cortex_m0-other-eabi:Clang|thumb-cortex_m4-other-eabihf:Clang|thumb-cortex_m4-other-eabi:Clang|thumb-cortex_m3-other-eabi:Clang|thumb-baseline-other-eabi:Clang|thumb-cortex_m33-other-eabihf:Clang|thumb-cortex_m33-other-eabi:Clang|wasm32-generic-emscripten-musl:Clang|wasm32-generic-other-musl:Clang|wasm32-generic-wasi-musl:Clang|x86_64-x86_64-ios-macabi:Clang|x86_64-x86_64-ios-none:Clang|x86_64-x86_64-macos-none:Clang|x86_64-x86_64-tvos-none:Clang|x86_64-x86_64-other-eabi:Clang|x86_64-x86_64-fuchsia-gnu:Clang|x86_64-x86_64-linux-android:Clang|x86_64-x86_64-solaris-eabi:Clang|x86_64-x86_64-windows-gnu:Gcc|x86_64-x86_64-dragonfly-eabi:Clang|x86_64-x86_64-freebsd-gnu:Clang|x86_64-x86_64-haiku-gnu:Clang|x86_64-x86_64-hermit-eabi:Clang|x86_64-x86_64-linux-gnux32:Gcc|x86_64-x86_64-linux-gnu:Gcc|x86_64-x86_64-linux-musl:Gcc|x86_64-x86_64-netbsd-gnu:Clang|x86_64-x86_64-openbsd-gnu:Clang|END
// repr targets Aarch64AppleMacosx|Some("aarch64-generic-macos-none") Aarch64Fuchsia|Some("aarch64-generic-fuchsia-gnu") Aarch64LinuxAndroid|Some("aarch64-generic-linux-android") Aarch64UnknownFreebsd|Some("aarch64-generic-freebsd-gnu") Aarch64UnknownHermit|Some("aarch64-generic-hermit-eabi") Aarch64UnknownLinuxGnu|Some("aarch64-generic-linux-gnu") Aarch64UnknownLinuxMusl|Some("aarch64-generic-linux-musl") Aarch64UnknownNetbsd|Some("aarch64-generic-netbsd-gnu") Aarch64UnknownNone|Some("aarch64-generic-other-none") Aarch64UnknownOpenbsd|Some("aarch64-generic-openbsd-gnu") Aarch64UnknownRedox|None Arm64AppleIos|Some("aarch64-generic-ios-none") Arm64AppleIosMacabi|Some("aarch64-generic-ios-macabi") Arm64AppleTvos|Some("aarch64-generic-tvos-none") Armebv7rUnknownNoneEabi|Some("arm-baseline-other-eabi") Armebv7rUnknownNoneEabihf|Some("arm-baseline-other-eabihf") ArmLinuxAndroideabi|None ArmUnknownLinuxGnueabi|Some("arm-baseline-linux-gnueabi") ArmUnknownLinuxGnueabihf|Some("arm-baseline-linux-gnueabihf") Armv4tUnknownLinuxGnueabi|Some("arm-arm710t-linux-gnueabi") Armv5teUnknownLinuxGnueabi|Some("arm-arm1020e-linux-gnueabi") Armv5teUnknownLinuxUclibcgnueabi|None Armv6UnknownFreebsdGnueabihf|Some("arm-arm1136j_s-freebsd-gnueabihf") Armv6UnknownNetbsdelfEabihf|Some("arm-arm1136j_s-netbsd-eabihf") Armv7aNoneEabi|Some("arm-baseline-other-eabi") Armv7aNoneEabihf|Some("arm-baseline-other-eabihf") Armv7AppleIos|Some("arm-cortex_r4-ios-none") Armv7NoneLinuxAndroid|Some("arm-cortex_r4-linux-android") Armv7rUnknownNoneEabi|Some("arm-cortex_r4-other-eabi") Armv7rUnknownNoneEabihf|Some("arm-cortex_r4-other-eabihf") Armv7sAppleIos|Some("arm-baseline-ios-none") Armv7UnknownFreebsdGnueabihf|Some("arm-cortex_r4-freebsd-gnueabihf") Armv7UnknownLinuxGnueabi|Some("arm-cortex_r4-linux-gnueabi") Armv7UnknownLinuxGnueabihf|Some("arm-cortex_r4-linux-gnueabihf") Armv7UnknownNetbsdelfEabihf|Some("arm-cortex_r4-netbsd-eabihf") AvrUnknownUnknown|Some("avr-avr2-other-eabi") HexagonUnknownLinuxMusl|Some("hexagon-generic-linux-musl") I386AppleIos|Some("x86-pentium4-ios-none") I586UnknownLinuxGnu|Some("x86-i586-linux-gnu") I586UnknownLinuxMusl|Some("x86-i586-linux-musl") I686AppleMacosx|Some("x86-i686-macos-none") I686LinuxAndroid|Some("x86-i686-linux-android") I686PcWindowsGnu|Some("x86-i686-windows-gnu") I686UnknownFreebsd|Some("x86-i686-freebsd-gnu") I686UnknownHaiku|Some("x86-i686-haiku-gnu") I686UnknownLinuxGnu|Some("x86-i686-linux-gnu") I686UnknownLinuxMusl|Some("x86-i686-linux-musl") I686UnknownNetbsdelf|Some("x86-i686-netbsd-gnu") I686UnknownOpenbsd|Some("x86-i686-openbsd-gnu") Mips64elUnknownLinuxGnuabi64|Some("mips64el-mips64-linux-gnuabi64") Mips64elUnknownLinuxMusl|Some("mips64el-mips64-linux-musl") Mips64UnknownLinuxGnuabi64|Some("mips64-mips64-linux-gnuabi64") Mips64UnknownLinuxMusl|Some("mips64-mips64-linux-musl") MipselSonyPsp|None MipselUnknownLinuxGnu|Some("mipsel-mips32-linux-gnu") MipselUnknownLinuxMusl|Some("mipsel-mips32-linux-musl") MipselUnknownLinuxUclibc|None MipselUnknownNone|Some("mipsel-mips32-other-none") Mipsisa32r6elUnknownLinuxGnu|Some("mips-mips32-linux-gnu") Mipsisa32r6UnknownLinuxGnu|Some("mips-mips32r6-linux-gnu") Mipsisa64r6elUnknownLinuxGnuabi64|Some("mips-mips32-linux-gnuabi64") Mipsisa64r6UnknownLinuxGnuabi64|Some("mips-mips64r6-linux-gnuabi64") MipsUnknownLinuxGnu|Some("mips-mips32-linux-gnu") MipsUnknownLinuxMusl|Some("mips-mips32-linux-musl") MipsUnknownLinuxUclibc|None Msp430NoneElf|Some("msp430-msp430-other-eabi") Powerpc64leUnknownLinuxGnu|Some("powerpc64le-ppc64le-linux-gnu") Powerpc64leUnknownLinuxMusl|Some("powerpc64le-ppc64le-linux-musl") Powerpc64UnknownFreebsd|Some("powerpc64-ppc64-freebsd-gnu") Powerpc64UnknownLinuxGnu|Some("powerpc64-ppc64-linux-gnu") Powerpc64UnknownLinuxMusl|Some("powerpc64-ppc64-linux-musl") PowerpcUnknownLinuxGnu|Some("powerpc-ppc-linux-gnu") PowerpcUnknownLinuxGnuspe|None PowerpcUnknownLinuxMusl|Some("powerpc-ppc-linux-musl") PowerpcUnknownNetbsd|Some("powerpc-ppc-netbsd-gnu") Riscv32|Some("riscv32-baseline_rv32-other-eabi") Riscv32UnknownLinuxGnu|Some("riscv32-baseline_rv32-linux-gnu") Riscv64|Some("riscv64-baseline_rv64-other-eabi") Riscv64UnknownLinuxGnu|Some("riscv64-baseline_rv64-linux-gnu") S390xUnknownLinuxGnu|Some("s390x-generic-linux-gnu") Sparc64UnknownLinuxGnu|Some("sparc64-v9-linux-gnu") Sparc64UnknownNetbsd|Some("sparc64-v9-netbsd-gnu") Sparc64UnknownOpenbsd|Some("sparc64-v9-openbsd-gnu") SparcUnknownLinuxGnu|Some("sparc-v8-linux-gnu") Sparcv9SunSolaris|Some("sparc-v9-solaris-eabi") Thumbv4tNoneEabi|Some("thumb-arm710t-other-eabi") Thumbv6mNoneEabi|Some("thumb-cortex_m0-other-eabi") Thumbv7emNoneEabihf|Some("thumb-cortex_m4-other-eabihf") Thumbv7emNoneEabi|Some("thumb-cortex_m4-other-eabi") Thumbv7mNoneEabi|Some("thumb-cortex_m3-other-eabi") Thumbv8mBaseNoneEabi|Some("thumb-baseline-other-eabi") Thumbv8mMainNoneEabihf|Some("thumb-cortex_m33-other-eabihf") Thumbv8mMainNoneEabi|Some("thumb-cortex_m33-other-eabi") Wasm32UnknownEmscripten|Some("wasm32-generic-emscripten-musl") Wasm32UnknownUnknown|Some("wasm32-generic-other-musl") Wasm32Wasi|Some("wasm32-generic-wasi-musl") X86_64AppleIosMacabi|Some("x86_64-x86_64-ios-macabi") X86_64AppleIos|Some("x86_64-x86_64-ios-none") X86_64AppleMacosx|Some("x86_64-x86_64-macos-none") X86_64AppleTvos|Some("x86_64-x86_64-tvos-none") X86_64Elf|Some("x86_64-x86_64-other-eabi") X86_64Fuchsia|Some("x86_64-x86_64-fuchsia-gnu") X86_64LinuxAndroid|Some("x86_64-x86_64-linux-android") X86_64PcSolaris|Some("x86_64-x86_64-solaris-eabi") X86_64PcWindowsGnu|Some("x86_64-x86_64-windows-gnu") X86_64RumprunNetbsd|None X86_64UnknownDragonfly|Some("x86_64-x86_64-dragonfly-eabi") X86_64UnknownFreebsd|Some("x86_64-x86_64-freebsd-gnu") X86_64UnknownHaiku|Some("x86_64-x86_64-haiku-gnu") X86_64UnknownHermit|Some("x86_64-x86_64-hermit-eabi") X86_64UnknownL4reUclibc|None X86_64UnknownLinuxGnux32|Some("x86_64-x86_64-linux-gnux32") X86_64UnknownLinuxGnu|Some("x86_64-x86_64-linux-gnu") X86_64UnknownLinuxMusl|Some("x86_64-x86_64-linux-musl") X86_64UnknownNetbsd|Some("x86_64-x86_64-netbsd-gnu") X86_64UnknownOpenbsd|Some("x86_64-x86_64-openbsd-gnu") X86_64UnknownRedox|None 
#ifdef ONE
_Static_assert(sizeof(S2) == 1, "");
_Static_assert(_Alignof(S2) == 1, "");
_Static_assert(sizeof(struct S2_extra_alignment) == 2, "");
_Static_assert(_Alignof(struct S2_extra_alignment) == 1, "");
_Static_assert(sizeof(struct S2_extra_packed) == 1, "");
_Static_assert(_Alignof(struct S2_extra_packed) == 1, "");
_Static_assert(sizeof(struct S2_extra_required_alignment) == 2, "");
_Static_assert(_Alignof(struct S2_extra_required_alignment) == 1, "");
_Static_assert(sizeof(struct S2_extra_size) == 3, "");
_Static_assert(_Alignof(struct S2_extra_size) == 1, "");
_Static_assert(sizeof(S4) == 1, "");
_Static_assert(_Alignof(S4) == 1, "");
_Static_assert(sizeof(struct S4_extra_alignment) == 2, "");
_Static_assert(_Alignof(struct S4_extra_alignment) == 1, "");
_Static_assert(sizeof(struct S4_extra_packed) == 1, "");
_Static_assert(_Alignof(struct S4_extra_packed) == 1, "");
_Static_assert(sizeof(struct S4_extra_required_alignment) == 2, "");
_Static_assert(_Alignof(struct S4_extra_required_alignment) == 1, "");
_Static_assert(sizeof(struct S4_extra_size) == 3, "");
_Static_assert(_Alignof(struct S4_extra_size) == 1, "");
_Static_assert(sizeof(S8) == 1, "");
_Static_assert(_Alignof(S8) == 1, "");
_Static_assert(sizeof(struct S8_extra_alignment) == 2, "");
_Static_assert(_Alignof(struct S8_extra_alignment) == 1, "");
_Static_assert(sizeof(struct S8_extra_packed) == 1, "");
_Static_assert(_Alignof(struct S8_extra_packed) == 1, "");
_Static_assert(sizeof(struct S8_extra_required_alignment) == 2, "");
_Static_assert(_Alignof(struct S8_extra_required_alignment) == 1, "");
_Static_assert(sizeof(struct S8_extra_size) == 3, "");
_Static_assert(_Alignof(struct S8_extra_size) == 1, "");
_Static_assert(sizeof(S16) == 1, "");
_Static_assert(_Alignof(S16) == 1, "");
_Static_assert(sizeof(struct S16_extra_alignment) == 2, "");
_Static_assert(_Alignof(struct S16_extra_alignment) == 1, "");
_Static_assert(sizeof(struct S16_extra_packed) == 1, "");
_Static_assert(_Alignof(struct S16_extra_packed) == 1, "");
_Static_assert(sizeof(struct S16_extra_required_alignment) == 2, "");
_Static_assert(_Alignof(struct S16_extra_required_alignment) == 1, "");
_Static_assert(sizeof(struct S16_extra_size) == 3, "");
_Static_assert(_Alignof(struct S16_extra_size) == 1, "");
_Static_assert(sizeof(S32) == 1, "");
_Static_assert(_Alignof(S32) == 1, "");
_Static_assert(sizeof(struct S32_extra_alignment) == 2, "");
_Static_assert(_Alignof(struct S32_extra_alignment) == 1, "");
_Static_assert(sizeof(struct S32_extra_packed) == 1, "");
_Static_assert(_Alignof(struct S32_extra_packed) == 1, "");
_Static_assert(sizeof(struct S32_extra_required_alignment) == 2, "");
_Static_assert(_Alignof(struct S32_extra_required_alignment) == 1, "");
_Static_assert(sizeof(struct S32_extra_size) == 3, "");
_Static_assert(_Alignof(struct S32_extra_size) == 1, "");
// MAPPING|TWO|aarch64-generic-windows-msvc:Msvc|x86-i586-windows-msvc:Msvc|x86-i686-windows-msvc:Msvc|x86-i686-uefi-msvc:Msvc|thumb-baseline-windows-msvc:Msvc|x86_64-x86_64-windows-msvc:Msvc|x86_64-x86_64-uefi-msvc:Msvc|END
// repr targets Aarch64PcWindowsMsvc|Some("aarch64-generic-windows-msvc") I586PcWindowsMsvc|Some("x86-i586-windows-msvc") I686PcWindowsMsvc|Some("x86-i686-windows-msvc") I686UnknownWindows|Some("x86-i686-uefi-msvc") Thumbv7aPcWindowsMsvc|Some("thumb-baseline-windows-msvc") X86_64PcWindowsMsvc|Some("x86_64-x86_64-windows-msvc") X86_64UnknownWindows|Some("x86_64-x86_64-uefi-msvc") 
#elif defined(TWO)
_Static_assert(sizeof(S2) == 1, "");
_Static_assert(_Alignof(S2) == 2, "");
_Static_assert(sizeof(struct S2_extra_alignment) == 4, "");
_Static_assert(_Alignof(struct S2_extra_alignment) == 2, "");
_Static_assert(sizeof(struct S2_extra_packed) == 1, "");
_Static_assert(_Alignof(struct S2_extra_packed) == 1, "");
_Static_assert(sizeof(struct S2_extra_required_alignment) == 2, "");
_Static_assert(_Alignof(struct S2_extra_required_alignment) == 1, "");
_Static_assert(sizeof(struct S2_extra_size) == 3, "");
_Static_assert(_Alignof(struct S2_extra_size) == 1, "");
_Static_assert(sizeof(S4) == 1, "");
_Static_assert(_Alignof(S4) == 4, "");
_Static_assert(sizeof(struct S4_extra_alignment) == 8, "");
_Static_assert(_Alignof(struct S4_extra_alignment) == 4, "");
_Static_assert(sizeof(struct S4_extra_packed) == 1, "");
_Static_assert(_Alignof(struct S4_extra_packed) == 1, "");
_Static_assert(sizeof(struct S4_extra_required_alignment) == 2, "");
_Static_assert(_Alignof(struct S4_extra_required_alignment) == 1, "");
_Static_assert(sizeof(struct S4_extra_size) == 3, "");
_Static_assert(_Alignof(struct S4_extra_size) == 1, "");
_Static_assert(sizeof(S8) == 1, "");
_Static_assert(_Alignof(S8) == 8, "");
_Static_assert(sizeof(struct S8_extra_alignment) == 16, "");
_Static_assert(_Alignof(struct S8_extra_alignment) == 8, "");
_Static_assert(sizeof(struct S8_extra_packed) == 1, "");
_Static_assert(_Alignof(struct S8_extra_packed) == 1, "");
_Static_assert(sizeof(struct S8_extra_required_alignment) == 2, "");
_Static_assert(_Alignof(struct S8_extra_required_alignment) == 1, "");
_Static_assert(sizeof(struct S8_extra_size) == 3, "");
_Static_assert(_Alignof(struct S8_extra_size) == 1, "");
_Static_assert(sizeof(S16) == 1, "");
_Static_assert(_Alignof(S16) == 16, "");
_Static_assert(sizeof(struct S16_extra_alignment) == 32, "");
_Static_assert(_Alignof(struct S16_extra_alignment) == 16, "");
_Static_assert(sizeof(struct S16_extra_packed) == 1, "");
_Static_assert(_Alignof(struct S16_extra_packed) == 1, "");
_Static_assert(sizeof(struct S16_extra_required_alignment) == 2, "");
_Static_assert(_Alignof(struct S16_extra_required_alignment) == 1, "");
_Static_assert(sizeof(struct S16_extra_size) == 3, "");
_Static_assert(_Alignof(struct S16_extra_size) == 1, "");
_Static_assert(sizeof(S32) == 1, "");
_Static_assert(_Alignof(S32) == 32, "");
_Static_assert(sizeof(struct S32_extra_alignment) == 64, "");
_Static_assert(_Alignof(struct S32_extra_alignment) == 32, "");
_Static_assert(sizeof(struct S32_extra_packed) == 1, "");
_Static_assert(_Alignof(struct S32_extra_packed) == 1, "");
_Static_assert(sizeof(struct S32_extra_required_alignment) == 2, "");
_Static_assert(_Alignof(struct S32_extra_required_alignment) == 1, "");
_Static_assert(sizeof(struct S32_extra_size) == 3, "");
_Static_assert(_Alignof(struct S32_extra_size) == 1, "");
#endif