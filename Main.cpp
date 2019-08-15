BOOL SetWindowTextA(
HWND   hWnd,
LPCSTR lpString);

int main() {
   SetWindowText(FindWindow, "Roblox", "Title");
}