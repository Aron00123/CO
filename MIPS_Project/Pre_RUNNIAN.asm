.data
leap_year_msg: .asciiz "1\n"       # ������
not_leap_year_msg: .asciiz "0\n"   # ��������

.text
main:
    # ��ȡ��������
    li $v0, 5
    syscall
    move $t0, $v0

    # �ж��Ƿ�Ϊ����
    divu $t1, $t0, 4     # ��������ݳ���4
    mfhi $t2             # ȡ����
    divu $t3, $t0, 100   # ��������ݳ���100
    mfhi $t4             # ȡ����
    divu $t5, $t0, 400   # ��������ݳ���400
    mfhi $t6             # ȡ����

    # ��������400�ı�������������
    beqz $t6, leap_year

    # ��������100�ı���������400�ı�������������
    beqz $t4, not_leap_year

    # ��������4�ı�������������
    beqz $t2, leap_year
    j not_leap_year

leap_year:
    # ���������
    li $v0, 4
    la $a0, leap_year_msg
    syscall
    j exit

not_leap_year:
    # �����������
    li $v0, 4
    la $a0, not_leap_year_msg
    syscall

exit:
    # �˳�����
    li $v0, 10
    syscall
