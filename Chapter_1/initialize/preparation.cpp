#include <windows.h>
#include <windowsx.h>
#include <d3d9.h>
#include <iostream>
/*	
// Assume _surface is a pointer to an IDirect3DSurface9 interface
// Assume a 32-bit pixel format for each pixel

// Get the surface description
D3DSURFACE_DESC surfaceDesc;
_surface->GetDesc(& surfaceDesc);

// Get a pointer to the surface pixel data.
D3DLOCKED_RECT lockedRect;
_surface->LockRect(
	& lockedRect,         // pointer to receive locked data
	0,                    // lock entire surface
	0);                   // no lock flag specified

// Iterate through each pixel in the surface and set it to red.
DWORD *imageData = (DWORD *)lockedREct.pBits;

for (int i = 0; i < surfaceDesc.Height; i++) {
	for (int j = 0; j < surfaceDesc.Width; j++) {
		// index into texture, note we use the pitch and divide by four
		// since the pitch is given in byte and there are 4 types per DWORD
		int index = i* lockedRect.Pitch / 4 +j;
		imageData[index] = 0xffff0000;   // red
	}
}

_surface->UnlockRect();
*/
/*
// construct D3DLOCKED_RECT defination
typedef struct _D3DLOCKED_RECT {
	int Pitch;          // the surface pitch
	void *pBits;        // pointer to the start of the surface memory
} D3DLOCKED_RECT;
*/

int main() {
	int i = 5;
	if (i == 10) {
		// std::cout << "i == 10" << std::endl;
	}

	return 0;
}
