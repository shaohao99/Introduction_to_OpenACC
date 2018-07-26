program main

integer :: n=1000, i 
real :: a=3.0
real, allocatable :: x(:), y(:)

allocate(x(n),y(n))

!do i=1,n 
!  x(i) = 2.0
!  y(i) = 1.0
!enddo 

x(1:n)=2.0;
y(1:n)=1.0;

!-- !$acc kernels 
!-- !$acc parallel loop
!$acc parallel do
do i=1,n 
  y(i) = a*x(i)+y(i)
enddo 
!-- !$acc end kernels
!-- !$acc end parallel loop
!$acc end parallel do

print*, y(1), y(n)

end program main
