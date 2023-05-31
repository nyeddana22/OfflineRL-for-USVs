# OfflineRL-for-USVs

Following repositories must be cloned into the catkin workspace:

git clone https://github.com/uuvsimulator/uuv_simulator
git clone https://github.com/heron/heron
git clone https://github.com/heron/heron_controller
git clone https://github.com/heron/heron_simulator

Following steps must be followed for installation:

https://clearpathrobotics.com/blog/2019/01/heron-usv-gets-a-new-simulator/

Instead of kinetic, the installtion must be for melodic.

Following steps must be performed to run RLPD:

How to run RLPD:

1. Install conda: https://docs.conda.io/projects/conda/en/latest/user-guide/install/linux.html
2. Activate conda:
    1. Add this to bashrc: export PATH="/path/to/anaconda3/bin:$PATH"
    2. Conda init 
    3. conda shell.bash activate
3. Install mujoco 1.50
    1. Download file: https://neptune.ai/blog/installing-mujoco-to-work-with-openai-gym-environments
    2. Extract to whatever folder is convenient but ensure you edit the path in bashrc like in step 4.
    3. Download license into bin folder of mujoco using wget: https://www.roboti.us/license.html
    4. Add path variables to bashrc:
        1. export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/home/niharika/.mujoco/mjpro150_linux/mjpro150/bin
        2. export MUJOCO_PY_MJPRO_PATH=/home/niharika/.mujoco/mjpro150_linux/mjpro150
        3. export MUJOCO_PY_MJKEY_PATH=/home/niharika/.mujoco/mjpro150_linux/mjpro150/bin/mjkey.txt
    5. Add this also (dont remember why): export CPATH=$CONDA_PREFIX/include
    6. Install these mujoco dependencies using conda: https://github.com/openai/mujoco-py/issues/627#issuecomment-1007658905
    7. pip3 install -U 'mujoco-py<1.50.2,>=1.50.1'
4. git clone rlpd repo: https://github.com/ikostrikov/rlpd
