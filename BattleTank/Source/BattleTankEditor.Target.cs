// Copyright RyanXu @CloudStudio

using UnrealBuildTool;
using System.Collections.Generic;

public class BattleTankEditorTarget : TargetRules
{
	public BattleTankEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "BattleTank" } );
	}
}
