// Copyright 2001-2019 Crytek GmbH / Crytek Group. All rights reserved.

#pragma once

#include "Common.h"
#include <IFile.h>
#include <PoolObject.h>

namespace CryAudio
{
namespace Impl
{
namespace SDL_mixer
{
class CFile final : public IFile, public CPoolObject<CFile, stl::PSyncNone>
{
public:

	CFile() = delete;
	CFile(CFile const&) = delete;
	CFile(CFile&&) = delete;
	CFile& operator=(CFile const&) = delete;
	CFile& operator=(CFile&&) = delete;

	explicit CFile(SampleId const id)
		: m_id(id)
	{}

	virtual ~CFile() override = default;

	SampleId GetSampleId() const { return m_id; }

private:

	SampleId const m_id;
};
} // namespace SDL_mixer
} // namespace Impl
} // namespace CryAudio
