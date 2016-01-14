clear
close all
clc

MarkerSize = 15;
%% load results
FmtDouble = '%f';
FmtInteger = '%d';

caseName = 'RRTresults.txt';
fid = fopen(caseName,'r');
ndim      = fscanf(fid,FmtInteger,      1          )
N         = fscanf(fid,FmtInteger,      1          )
found     = fscanf(fid,FmtInteger,      1          )
near_node = fscanf(fid,FmtInteger,      1          )
Fmt_ndim = [repmat('%f ',[1 ndim]),'\n'];
Qi = fscanf(fid,Fmt_ndim,        [1,ndim]     )
Qg = fscanf(fid,Fmt_ndim,        [1,ndim]     )
G = zeros(N,ndim);
for i = 1:N
    G(i,:) = fscanf(fid,Fmt_ndim,        [1,ndim]     );
end
parent = zeros(N,1);
for i = 1:N
    parent(i) = fscanf(fid,FmtInteger,      1          );
end
fclose(fid);
%% plotting
figure(1);hold on;whitebg([.6 .6 .6])
xlabel('x')
ylabel('y')
plot(G(:,1),G(:,2),'r.','MarkerSize',MarkerSize);
for i = 2:N
    a = G(i,1:2);
    b = G(parent(i)+1,:);
    plot([a(1) b(1)],[a(2) b(2)],'k-','LineWidth',2)
end
plot(Qi(1),Qi(2),'gx','MarkerSize',MarkerSize);
plot(Qg(1),Qg(2),'mx','MarkerSize',MarkerSize);
axis tight

if (found==1)
    t = N;
    k = parent(N)+1;
    while(t~=1)
        plot(G(t,1),G(t,2),'bo');
        plot(G(k,1),G(k,2),'bo');
        plot([G(t,1) G(k,1)],[G(t,2) G(k,2)],'b');
        t=k;
        k=parent(t)+1;
    end
end

hold off