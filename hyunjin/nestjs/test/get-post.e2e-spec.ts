import { Test, TestingModule } from '@nestjs/testing';
import { INestApplication } from '@nestjs/common';
import * as request from 'supertest';
import { GetPostModule } from '../src/get-post/get-post.module';

describe('GetPostController (e2e)', () => {
  let app: INestApplication;

  beforeEach(async () => {
    const moduleFixture: TestingModule = await Test.createTestingModule({
      imports: [GetPostModule],
    }).compile();

    app = moduleFixture.createNestApplication();
    await app.init();
  });

  afterEach(async () => {
    await app.close();
  });

  it('GET /getpost', () => {
    return request(app.getHttpServer())
      .get('/getpost')
      .expect(200)
      .expect('GET Hello!');
  });

  it('GET /getpost/depth', () => {
    return request(app.getHttpServer())
      .get('/getpost/depth')
      .expect(200)
      .expect('Depth Hello!');
  });

  it('GET /getpost/depth/one', () => {
    return request(app.getHttpServer())
      .get('/getpost/depth/one')
      .expect(200)
      .expect('Depth ONE Hello!');
  });

  it('GET /getpost/depth/something-one (wildcard test)', () => {
    return request(app.getHttpServer())
      .get('/getpost/depth/something-one')
      .expect(200)
      .expect('Depth * Hello!');
  });

  it('POST /getpost', () => {
    return request(app.getHttpServer())
      .post('/getpost')
      .expect(201) // NestJS returns 201 for POST requests by default
      .expect('POST Hello!');
  });
});
