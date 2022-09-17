#pragma once
#include "helpers.hpp"

// Configuration memory addresses
namespace ConfigMem {
	enum : u32 {
		KernelVersionMinor = 0x1FF80002,
		KernelVersionMajor = 0x1FF80003
	};
}