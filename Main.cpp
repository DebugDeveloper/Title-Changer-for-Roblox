#define FindWindowA

BOOL SetWindowTextA(
HWND   hWnd,
LPCSTR lpString);

int main() {
   SetWindowText(FindWindowA, "Roblox", "Title");
}
