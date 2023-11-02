// Copyright (C) 2023 Jérôme "Lynix" Leclercq (lynix680@gmail.com)
// This file is part of the "Nazara Engine - Core module"
// For conditions of distribution and use, see copyright notice in Config.hpp

#pragma once

#ifndef NAZARA_CORE_FORMAT_HPP
#define NAZARA_CORE_FORMAT_HPP

#include <NazaraUtils/Prerequisites.hpp>
#include <Nazara/Core/Config.hpp>
#include <string>

#ifdef NAZARA_BUILD

#include <fmt/compile.h>
#include <fmt/format.h>
#include <fmt/std.h>

#define NAZARA_FORMAT(s) FMT_STRING(s)

#else

#define NAZARA_FORMAT(s) s

#endif

namespace Nz
{
#ifdef NAZARA_BUILD
	template<typename... Args> using FormatString = fmt::format_string<Args...>;
#else
	template<typename... Args> using FormatString = std::string_view;
#endif

	template<typename... Args> std::string Format(FormatString<Args...> str, Args&&... args);
}

#include <Nazara/Core/Format.inl>

#endif // NAZARA_CORE_FORMAT_HPP
