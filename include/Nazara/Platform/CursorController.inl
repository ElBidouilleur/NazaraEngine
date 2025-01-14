// Copyright (C) 2024 Jérôme "SirLynix" Leclercq (lynix680@gmail.com)
// This file is part of the "Nazara Engine - Platform module"
// For conditions of distribution and use, see copyright notice in Config.hpp

#include <Nazara/Platform/Debug.hpp>

namespace Nz
{
	inline void CursorController::UpdateCursor(const std::shared_ptr<Cursor>& cursor)
	{
		OnCursorUpdated(this, cursor);
	}
}

#include <Nazara/Platform/DebugOff.hpp>
