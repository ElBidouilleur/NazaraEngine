// Copyright (C) 2024 Jérôme "SirLynix" Leclercq (lynix680@gmail.com)
// This file is part of the "Nazara Engine - Audio module"
// For conditions of distribution and use, see copyright notice in Config.hpp

#pragma once

#ifndef NAZARA_AUDIO_FORMATS_DRWAVLOADER_HPP
#define NAZARA_AUDIO_FORMATS_DRWAVLOADER_HPP

#include <NazaraUtils/Prerequisites.hpp>
#include <Nazara/Audio/SoundBuffer.hpp>
#include <Nazara/Audio/SoundStream.hpp>

namespace Nz::Loaders
{
	SoundBufferLoader::Entry GetSoundBufferLoader_drwav();
	SoundStreamLoader::Entry GetSoundStreamLoader_drwav();
}

#endif // NAZARA_AUDIO_FORMATS_DRWAVLOADER_HPP
