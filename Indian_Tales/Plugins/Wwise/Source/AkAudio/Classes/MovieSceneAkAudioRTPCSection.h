// Copyright (c) 2006-2016 Audiokinetic Inc. / All Rights Reserved

#pragma once

#include "AkInclude.h"
#include "AkRtpc.h"
#include "Curves/RichCurve.h"
#include "MovieSceneSection.h"
#include "MovieSceneFloatChannelSerializationHelper.h"

#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneAkAudioRTPCSection.generated.h"

/**
* A single floating point section
*/
UCLASS()
class AKAUDIO_API UMovieSceneAkAudioRTPCSection
	: public UMovieSceneSection
{
	GENERATED_BODY()
	UMovieSceneAkAudioRTPCSection(const FObjectInitializer& Init);
	virtual void PostLoad() override;
	virtual void Serialize(FArchive& Ar) override;

public:
	FMovieSceneFloatChannel GetChannel() const {	return RTPCChannel;	}
	float GetStartTime() const;
	float GetEndTime() const;

	virtual FMovieSceneEvalTemplatePtr GenerateTemplate() const override;

	/** @return the name of the RTPC being modified by this track */
	FString GetRTPCName() const { return RTPC ? RTPC->GetName() : Name; }

	/**
	* Sets the name of the RTPC being modified by this track
	*
	* @param InRTPCName The RTPC being modified
	*/
	void SetRTPCName(const FString& InRTPCName) { Name = InRTPCName; }
	void SetRTPC(UAkRtpc* InRTPC) { RTPC = InRTPC; }

#if WITH_EDITOR
#if UE_4_25_OR_LATER
	virtual void PreEditChange(FProperty* PropertyAboutToChange) override;
#else
	virtual void PreEditChange(UProperty* PropertyAboutToChange) override;
#endif
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

protected:
	UPROPERTY(EditAnywhere, Category = "AkAudioRTPC", meta = (NoResetToDefault))
	UAkRtpc* RTPC = nullptr;

	/** Name of the RTPC to modify. */
	UPROPERTY(EditAnywhere, AdvancedDisplay, Category = "AkAudioRTPC", meta = (NoResetToDefault))
	FString Name;

	/** Curve data */
	UPROPERTY()
	FRichCurve FloatCurve;

	// Enabled serialization of RTPCChannel when 4.24 support was added. We will be able to get rid of 
	// FloatChannelSerializationHelper when we remove 4.21 support. Tagging UE_4_21_OR_LATER so we catch
	// this when removing 4.21 support
	UPROPERTY()
	FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper;

	UPROPERTY()
	FMovieSceneFloatChannel RTPCChannel;

private:
#if WITH_EDITOR
	bool IsRTPCNameValid();

	FString PreviousName;
#endif
};