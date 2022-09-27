// Copyright Epic Games, Inc. All Rights Reserved.

#include "TAPyToolBPLibrary.h"
#include "TAPyTool.h"
#include "Editor/UnrealEd/Public/Editor.h"


UTAPyToolBPLibrary::UTAPyToolBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UTAPyToolBPLibrary::TAPyToolSampleFunction(float Param)
{
	return -1;
}


void UTAPyToolBPLibrary::ExcuteCommand(FString ConsoleCommand)
{
	if(GEditor)
	{
		UWorld* world = GEditor->GetEditorWorldContext().World();
		if(world)
		{
			GEditor->Exec(world, *ConsoleCommand, *GLog);
		}
	}
}
