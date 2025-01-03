class Solution {
public:
   double angleClock(int hour, int minutes) {
    double minuteAngle = minutes * 6; // Each minute = 6 degrees
    double hourAngle = (hour % 12) * 30 + minutes * 0.5; // Each hour = 30 degrees + offset by minutes
    double angle = fabs(hourAngle - minuteAngle); // Absolute difference
    return min(angle, 360 - angle); // Smaller angle
}
};