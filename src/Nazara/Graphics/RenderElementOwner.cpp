// Copyright (C) 2024 Jérôme "SirLynix" Leclercq (lynix680@gmail.com)
// This file is part of the "Nazara Engine - Graphics module"
// For conditions of distribution and use, see copyright notice in Config.hpp

#include <Nazara/Graphics/RenderElementOwner.hpp>
#include <Nazara/Graphics/RenderElementPool.hpp>
#include <Nazara/Graphics/Debug.hpp>

namespace Nz
{
	RenderElementOwner::~RenderElementOwner()
	{
		if (m_pool)
			m_pool->Free(m_poolIndex);
	}
}
