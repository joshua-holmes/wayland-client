#include <stdio.h>
#include <wayland-client.h>

int main(int argc, char *argv[]) {
    struct wl_display *display = wl_display_connect(NULL);
    if (!display) {
        printf("Failed to connect to Wayland display.\n");
        return 1;
    }
    printf("Connection established!\n");

    wl_display_disconnect(display);
    return 0;
}

