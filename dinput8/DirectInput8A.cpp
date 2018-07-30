#include "stdafx.h"
#include "DirectInput8A.h"

STDMETHODIMP DirectInput8A::QueryInterface(REFIID riid, LPVOID *ppvObj) {
	return E_NOTIMPL;
}

STDMETHODIMP_(ULONG) DirectInput8A::AddRef(void) {
	return 1;
}

STDMETHODIMP_(ULONG) DirectInput8A::Release(void) {
	delete this;
	return 0;
}

STDMETHODIMP DirectInput8A::CreateDevice(REFGUID, LPDIRECTINPUTDEVICE8A *, LPUNKNOWN) {
	return E_NOTIMPL;
}

STDMETHODIMP DirectInput8A::EnumDevices(DWORD, LPDIENUMDEVICESCALLBACKA, LPVOID, DWORD) {
	// Crash calls this function multiple times a second; just pretend there are no devices
	return S_OK;
}

STDMETHODIMP DirectInput8A::GetDeviceStatus(REFGUID) {
	return E_NOTIMPL;
}

STDMETHODIMP DirectInput8A::RunControlPanel(HWND, DWORD) {
	return E_NOTIMPL;
}

STDMETHODIMP DirectInput8A::Initialize(HINSTANCE, DWORD) {
	return E_NOTIMPL;
}

STDMETHODIMP DirectInput8A::FindDevice(REFGUID, LPCSTR, LPGUID) {
	return E_NOTIMPL;
}

STDMETHODIMP DirectInput8A::EnumDevicesBySemantics(LPCSTR, LPDIACTIONFORMATA, LPDIENUMDEVICESBYSEMANTICSCBA, LPVOID, DWORD) {
	return E_NOTIMPL;
}

STDMETHODIMP DirectInput8A::ConfigureDevices(LPDICONFIGUREDEVICESCALLBACK, LPDICONFIGUREDEVICESPARAMSA, DWORD, LPVOID) {
	return E_NOTIMPL;
}
