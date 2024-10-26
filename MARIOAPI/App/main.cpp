#include "PreCompile.h"
#include <ContentsProject/MarioContentsCore.h>


#include <EngineCore/EngineAPICore.h>

#pragma comment (lib, "EngineCore.lib")
#pragma comment (lib, "ContentsProject.lib")


#include <EngineBase/EngineTimer.h>

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR    lpCmdLine,
	_In_ int       nCmdShow)
{
	EduContentsCore User;
	return UEngineAPICore::EngineStart(hInstance, &User);
}