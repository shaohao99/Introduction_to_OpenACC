program main

integer :: n=1000, i 
real :: a=3.0
real, allocatable :: x(:), y(:)

allocate(x(n),y(n))

x(1:n)=2.0;
y(1:n)=1.0;

do i=1,n 
  y(i) = a*x(i)+y(i)
enddo 

print*, y(1), y(n)

end program main
