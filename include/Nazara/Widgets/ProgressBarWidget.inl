// Copyright (C) 2024 Jérôme "SirLynix" Leclercq (lynix680@gmail.com)
// This file is part of the "Nazara Engine - Widgets module"
// For conditions of distribution and use, see copyright notice in Config.hpp

#include <Nazara/Widgets/ProgressBarWidget.hpp>
#include <algorithm>
#include <Nazara/Widgets/Debug.hpp>

namespace Nz
{
	inline float ProgressBarWidget::GetFraction() const
	{
		return m_fraction;
	}

	inline void ProgressBarWidget::SetFraction(float fraction)
	{
		m_fraction = std::clamp(fraction, 0.f, 1.f);
		Layout();
	}
}

#include <Nazara/Widgets/DebugOff.hpp>
