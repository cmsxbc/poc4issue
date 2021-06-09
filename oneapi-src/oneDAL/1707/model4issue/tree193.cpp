 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree193(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 25, (DAAL_DATA_TYPE)0.94550000000000012);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 24, (DAAL_DATA_TYPE)2.2220000000000004);
    builder.addLeafNode(treeId, nodeIds[2], 0, (DAAL_DATA_TYPE)0.00040521486256297611);
    builder.addLeafNode(treeId, nodeIds[2], 1, (DAAL_DATA_TYPE)-0.0077745149316995046);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[1], 1, 15, (DAAL_DATA_TYPE)-1.6534999999999997);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 18, (DAAL_DATA_TYPE)0.27050000000000007);
    builder.addLeafNode(treeId, nodeIds[6], 0, (DAAL_DATA_TYPE)0.01028817111833228);
    builder.addLeafNode(treeId, nodeIds[6], 1, (DAAL_DATA_TYPE)-0.00083898972146786174);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[5], 1, 26, (DAAL_DATA_TYPE)0.90750000000000008);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[9], 0, 0, (DAAL_DATA_TYPE)1.3045000000000002);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[10], 0, 17, (DAAL_DATA_TYPE)1.2625000000000002);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[11], 0, 4, (DAAL_DATA_TYPE)-0.11749999999999998);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[12], 0, 1, (DAAL_DATA_TYPE)0.93950000000000011);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[13], 0, 7, (DAAL_DATA_TYPE)0.76350000000000018);
    builder.addLeafNode(treeId, nodeIds[14], 0, (DAAL_DATA_TYPE)-0.0010589349017079389);
    builder.addLeafNode(treeId, nodeIds[14], 1, (DAAL_DATA_TYPE)0.0087706129066646103);
    builder.addLeafNode(treeId, nodeIds[13], 1, (DAAL_DATA_TYPE)-0.0092125498649218811);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[12], 1, 22, (DAAL_DATA_TYPE)0.89850000000000019);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[18], 0, 11, (DAAL_DATA_TYPE)-0.30749999999999994);
    builder.addLeafNode(treeId, nodeIds[19], 0, (DAAL_DATA_TYPE)-0.0046860704722348602);
    builder.addLeafNode(treeId, nodeIds[19], 1, (DAAL_DATA_TYPE)0.007036321965808218);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[18], 1, 17, (DAAL_DATA_TYPE)0.87350000000000005);
    builder.addLeafNode(treeId, nodeIds[22], 0, (DAAL_DATA_TYPE)-0.0042779590856904786);
    builder.addLeafNode(treeId, nodeIds[22], 1, (DAAL_DATA_TYPE)-0.014742100407325088);
    nodeIds[25] = builder.addSplitNode(treeId, nodeIds[11], 1, 13, (DAAL_DATA_TYPE)1.0225000000000002);
    builder.addLeafNode(treeId, nodeIds[25], 0, (DAAL_DATA_TYPE)-0.0037433971171126224);
    builder.addLeafNode(treeId, nodeIds[25], 1, (DAAL_DATA_TYPE)0.0083646691739332028);
    builder.addLeafNode(treeId, nodeIds[10], 1, (DAAL_DATA_TYPE)-0.0085642939269104431);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[9], 1, 27, (DAAL_DATA_TYPE)0.9295000000000001);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[29], 0, 1, (DAAL_DATA_TYPE)-1.6234999999999997);
    builder.addLeafNode(treeId, nodeIds[30], 0, (DAAL_DATA_TYPE)0.010528280636450898);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[30], 1, 9, (DAAL_DATA_TYPE)0.52550000000000019);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[32], 0, 2, (DAAL_DATA_TYPE)-0.24149999999999996);
    builder.addLeafNode(treeId, nodeIds[33], 0, (DAAL_DATA_TYPE)-0.011445953355481228);
    builder.addLeafNode(treeId, nodeIds[33], 1, (DAAL_DATA_TYPE)0.00076383570776670249);
    nodeIds[36] = builder.addSplitNode(treeId, nodeIds[32], 1, 25, (DAAL_DATA_TYPE)1.4475000000000002);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[36], 0, 6, (DAAL_DATA_TYPE)-0.018499999999999996);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[37], 0, 27, (DAAL_DATA_TYPE)0.87850000000000017);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[38], 0, 17, (DAAL_DATA_TYPE)0.73550000000000015);
    builder.addLeafNode(treeId, nodeIds[39], 0, (DAAL_DATA_TYPE)-0.0083022602851269764);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[39], 1, 10, (DAAL_DATA_TYPE)-0.19849999999999998);
    builder.addLeafNode(treeId, nodeIds[41], 0, (DAAL_DATA_TYPE)-0.0041172202356392516);
    builder.addLeafNode(treeId, nodeIds[41], 1, (DAAL_DATA_TYPE)0.008106261806096882);
    builder.addLeafNode(treeId, nodeIds[38], 1, (DAAL_DATA_TYPE)0.0048352972288036129);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[37], 1, 4, (DAAL_DATA_TYPE)1.0855000000000004);
    builder.addLeafNode(treeId, nodeIds[45], 0, (DAAL_DATA_TYPE)0.0039406245261648281);
    builder.addLeafNode(treeId, nodeIds[45], 1, (DAAL_DATA_TYPE)0.011522545384812273);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[36], 1, 10, (DAAL_DATA_TYPE)-0.31599999999999995);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[48], 0, 13, (DAAL_DATA_TYPE)0.78850000000000009);
    builder.addLeafNode(treeId, nodeIds[49], 0, (DAAL_DATA_TYPE)-0.0036165310979066863);
    builder.addLeafNode(treeId, nodeIds[49], 1, (DAAL_DATA_TYPE)0.007877807917468475);
    builder.addLeafNode(treeId, nodeIds[48], 1, (DAAL_DATA_TYPE)-0.0047040379178874634);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[29], 1, 24, (DAAL_DATA_TYPE)1.3985000000000001);
    builder.addLeafNode(treeId, nodeIds[53], 0, (DAAL_DATA_TYPE)-0.0019828792464346837);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[53], 1, 2, (DAAL_DATA_TYPE)0.7965000000000001);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[55], 0, 1, (DAAL_DATA_TYPE)0.97250000000000003);
    builder.addLeafNode(treeId, nodeIds[56], 0, (DAAL_DATA_TYPE)0.00090297098855549583);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)0.0069885299101264944);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[55], 1, 27, (DAAL_DATA_TYPE)1.3125000000000002);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)-0.0076594491836194899);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)0.00082052970994446516);

}