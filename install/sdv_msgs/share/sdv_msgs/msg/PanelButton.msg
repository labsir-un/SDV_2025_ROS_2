# PanelButton.msg

std_msgs/Header header
uint8 status

uint8 RELEASED = 0
uint8 ONE_PRESSED = 1
uint8 ONE_LONG_PRESSED = 2
uint8 TWO_PRESSED = 3
uint8 THREE_PRESSED = 4
uint8 HARD_PRESSED = 5
uint8 NEVER_PRESSED = 6
uint8 FAILED_PRESSED = 7