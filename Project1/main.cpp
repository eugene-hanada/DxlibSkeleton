#include <DxLib.h>
#include <cassert>

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
	SetGraphMode(1280, 720, 32);
	ChangeWindowMode(true);
	SetWindowText(L"2016027_â‘ìcóTêm");
	assert(DxLib_Init() != -1);

	while (ProcessMessage() == 0)
	{
		SetDrawScreen(DX_SCREEN_BACK);
		ClsDrawScreen();

		ScreenFlip();
	}
	DxLib_End();
	return 0;
}