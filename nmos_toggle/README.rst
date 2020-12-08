.. _nmos_toggle:

NMOS Toggle
###########

Overview
********

A simple sample that can be used with any :ref:`supported board <boards>` and
prints "NMOS Toggle" to the console.

Building and Running
********************

This application can be built and executed on QEMU as follows:

.. zephyr-app-commands::
   :zephyr-app: samples/nmos_toggle
   :host-os: unix
   :board: qemu_x86
   :goals: run
   :compact:

To build for another board, change "qemu_x86" above to that board's name.

Sample Output
=============

.. code-block:: console

    NMOS Toggle! x86

Exit QEMU by pressing :kbd:`CTRL+A` :kbd:`x`.
