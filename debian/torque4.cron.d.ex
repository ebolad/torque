#
# Regular cron jobs for the torque package
#
0 4	* * *	root	[ -x /usr/bin/torque_maintenance ] && /usr/bin/torque_maintenance
